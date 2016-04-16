#ifndef Rectangle_h__
#define Rectangle_h__
#include "Graphic.h"
#include "Color.h"
class DisplayBuffer;
class Rectangle : public Graphic {
public:
	/**
	* @brief ���εĹ��캯��
	* @param[in] w ��
	* @param[in] h ��
	* @param[in] solid �Ƿ���ʵ�ĵ�
	*/
	Rectangle(int w, int h, Color color, bool solid = true) noexcept
		: _w(w), _h(h), _solid(solid), _color(color) {}
	virtual ~Rectangle() {}
	virtual void draw(DisplayBuffer& buffer) override;
	virtual void update() override {};
private:
	bool _solid;
	int _w, _h;
	Color _color;
};

#endif // Rectangle_h__
