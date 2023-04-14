/*
    #lecture 06-03 / 23.04.09 leejuchan

    @brief : text를 입력하면, 단어목록(오름차순)으로 바꿔주는 알고리즘
    @details : text분할, 단어 순서비교, 중복 단어 제거
*/

package ch06;

public class WordSort {

    // 1) (문장 -> 단어) 분할 함수
    public static String[] splitText(String text) {
        
        String transferedText;
        String[] word;

        // 소문자로 변경 + 특수문자 제거 (한글, 영어, 숫자, 공백 제외)
        transferedText = text.toLowerCase().replaceAll("[^ㄱ-ㅎㅏ-ㅣ가-힣a-zA-Z0-9 ]", "");

        // 공백 기준 분할
        word = transferedText.split(" ");

        return word;
    }


    // 2-1 단어 순서 비교 함수 / 리턴값 : -1(w1>w2), 0(w1==w2), 1(w1<w2)
    public static int compareWord(String w1, String w2) {

        int idx = 0;
        
        // 알파벳 하나씩 비교 (단어 길이 내에서)
        while ((idx < w1.length()) && (idx < w2.length())) {
            
            if (w1.charAt(idx) > w2.charAt(idx)) { // (알파벳 순서) 왼쪽이 높은 경우  -1
                return -1;
            } else if (w1.charAt(idx) < w2.charAt(idx)) {  // 오른쪽이 높은 경우 1
                return 1;
            } else {           // 같은 경우 -> 다음 알파벳 비교
                idx++;
            }
        }

        // 존재하는 알파벳이 같음
        if(w1.length() == w2.length()) { // 단어 길이 같음 = 동일 단어인 경우 0
            return 0;
        } else {                        // 단어 길이 다름 = 앞부분만 같은 경우 -> 길이가 긴 쪽 ex) apple > ap 
            if (w1.length() > w2.length()) {
                return -1;
            } else {
                return 1;
            }
        }
    }

    // 2-2 요소 교환 함수
    public static String[] swap(String[] arr, int src, int dst) {
        
        String temp;

        temp = arr[src];
        arr[src] = arr[dst];
        arr[dst] = temp;

        return arr;
    }

    // 2) 단어 정렬 함수 (-> 버블 정렬)
    public static String[] sortWord(String[] word) {
        
        for (int size = word.length; size > 0; size--) {

            for (int idx=0; idx < size-1; idx++) { //idx+1이 최대 인덱스 넘는것 방지

                if (compareWord(word[idx], word[idx+1]) == -1) { // word[idx] > word[idx+1] 인 경우
                    swap(word, idx, idx+1);
                }
            }
        }

        return word;
    }

    
    // 3) 중복 단어 제거 함수
    public static String[] deduplicateWord(String[] word) {
        
        int wordCount;

        String[] deduplicatedWord;
        int deIdx;
        int idx;

        // 총 단어 개수 (중복 제외)
        wordCount = 1;
        for(idx=1; idx < word.length; idx++) {
            
            if(word[idx].equals(word[idx-1])) { // 중복단어 무시
                continue;
            }

            wordCount++;
        }

        // 중복단어 제외하고 복사
        deduplicatedWord = new String[wordCount]; 

        deIdx = 0;
        idx = 0;
        deduplicatedWord[deIdx++] = word[idx++]; // 첫 단어는 일단 저장

        while(idx < word.length) {

            if(word[idx].equals(word[idx-1])) { // 같은 단어 -> 무시
                idx++;
            } else {                            // 다른 단어 -> deduplicatedWord[]에 저장
                deduplicatedWord[deIdx++] = word[idx++];
            }
        }

        return deduplicatedWord;
    }

    
    // 1. 정렬된 단어 생성 함수 (text -> arranged word)
    public static String[] createArrangedWord(String text) {
        
        String[] result = deduplicateWord(sortWord(splitText(text)));

        return result;
    }


    // 2. 단어 출력 함수
    public static void printWord(String[] word) {

        for(int i=0; i<word.length; i++) {

            System.out.println(word[i]);
        }
    }

    public static void main(String[] args) {

        // 문장
        String text = "He was an old man who fished alone in a skiff in the Gulf Stream and he had gone eighty-four days now without taking a fish. In the first forty days a boy had been with him. But after forty days without a fish the boy's parents had told him that the old man was now definitely and finally salao, which is the worst form of unlucky, and the boy had gone at their orders in another boat which caught three good fish the first week. It made the boy sad to see the old man come in each day with his skiff empty and he always went down to help him carry either the coiled lines or the gaff and harpoon and the sail that was furled around the mast. The sail was patched with flour sacks and, furled, it looked like the flag of permanent defeat. Once when I was six years old I saw a magnificent picture in a book, called True Stories from Nature, about the primeval forest. It was a picture of a boa constrictor in the act of swallowing an animal. Here is a copy of the drawing. In the book it said: \"Boa constrictors swallow their prey whole, without chewing it. After that they are not able to move, and they sleep through the six months that they need for digestion.\" I pondered deeply, then, over the adventures of the jungle. And after some work with a colored pencil I succeeded in making my first drawing. My Drawing Number One. It looked something like this:";
        
        // 단어 정렬
        String[] word = createArrangedWord(text);

        // 단어 출력
        printWord(word);
    }
}