struct point
{
	int x;
	int y;
};
struct rectangle
{
	struct point topLeft; //nested struct
	struct point bottomRight;
};

