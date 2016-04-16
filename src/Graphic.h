#ifndef Graphic_h__
#define Graphic_h__
class DisplayBuffer;
/*!
 * \class Graphic
 *
 * \brief ����ͼ�εĻ���
 *
 * \author Null
 * \date ���� 2016
 */
class Graphic {
public:
	virtual ~Graphic() {}
	/**
	* @brief ��ͼ����
	* @param[in] buffer ��ͼ��������Ϊ��ͼ��Ŀ��
	* @note ������update����֮�󱻵���
	*/
	virtual void draw(DisplayBuffer& buffer) = 0;

	/**
	* @brief ˢ�º���
	* @note ÿ֡����һ�Σ�����draw����֮ǰ������
	*/
	virtual void update() = 0;

	int getX() const { return _x; }
	void setX(int val) { _x = val; }
	int getY() const { return _y; }
	void setY(int val) { _y = val; }
	bool getVisibility() const { return _visibility; }
	void setVisibility(bool vis) { _visibility = vis; }

protected:
	int _x, _y;
	bool _visibility = true;
};

#endif // Graphic_h__
