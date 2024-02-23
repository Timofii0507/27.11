#ifndef inner_size_h
#define inner_size_h

struct InnerSize
{
public:
	float width;
	float height;

	InnerSize()
	{
		this->width = 100;
		this->height = 25;
	}

	InnerSize(float width, float height)
	{
		this->width = width;
		this->height = height;
	}
};

#endif
