#ifndef DisplayBuffer_h__
#define DisplayBuffer_h__
#include <memory>
#include "Exceptions.h"
#include "Color.h"
/*!
 * \class DisplayBuffer
 *
 * \brief ��ͼ������
 *
 * \author Null
 * \date ���� 2016
 */
class DisplayBuffer {
public:
	/**
	* @brief DisplayBuffer�Ĺ��캯��
	* @param[in] w ��
	* @param[in] h ��
	* @note buffer��w*h��3��(r,g,b)
	* ���з�ʽ:
	* 0 1 2
	* 3 4 5
	* 6 7 8
	*/
	DisplayBuffer(int w, int h)
		:_w(w), _h(h), _buffer(new unsigned char[w*h*3]) {};

	const Color getPixel(int x, int y) const
	{
		if (x > _w || y > _h) throw Bad_Arg();
		unsigned char* buffer = _buffer.get();
		buffer += y*_w * 3;
		return Color{ *buffer,*(buffer + 1),*(buffer + 2) };
	}

	void setPixel(int x, int y, Color c)
	{
		if (x > _w || y > _h) throw Bad_Arg();
		unsigned char* buffer = _buffer.get();
		buffer += y*_w * 3;
		*buffer = c.r;
		*(buffer + 1) = c.g;
		*(buffer + 2) = c.b;
	}
private:
	std::unique_ptr<unsigned char[]> _buffer;
	int _w, _h;
};

#endif // DisplayBuffer_h__