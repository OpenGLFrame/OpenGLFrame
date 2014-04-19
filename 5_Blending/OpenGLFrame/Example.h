#ifndef __EXAMPLE_H__
#define __EXAMPLE_H__


#include "GLFrame.h"            /**< ���������Ŀ���� */
#include "CBMPLoader.h"         /**< ����λͼ������ */    

/** ��GL_Application������һ������ */
class Example : GLApplication								
{
public:
	bool	Init();										/**< ִ�����еĳ�ʼ������������ɹ���������true */
	void	Uninit();										/**< ִ�����е�ж�ع��� */
	void	Update(DWORD milliseconds);							/**< ִ�����еĸ��²���������Ĳ���Ϊ���β���������ʱ�䣬�Ժ���Ϊ��λ */
	void	Draw();												/**< ִ�����еĻ��Ʋ��� */

	bool LoadTexture();                                        /**< װ������ */
	//bool LoadT8(LPCWSTR filename, GLuint &texture);

	void DrawBox(float r);                                     /**< ����һ������ */
	void DrawEarth(float er);
	void DrawSun(float sr);
	void DrawMoon(float mr);
	void material_moon();
	void grab(void);
	int power_of_two(int n);
	//GLuint load_texture(const char* file_name);

	double CalFrequency();
private:
	friend class GLApplication;								/**< ����Ϊ����һ����Ԫ�࣬�����������������ʵ����������GL_Application * GL_Application::Create(const char * class_name) */
	Example(const char * class_name);						/**< ���캯�� */

	/** �û��Զ���ĳ������ */
	CBMPLoader  Texture;          /**< λͼ������Ķ��� */
	float  rot;					  /**< ������ת���� */

};

#endif	// __EXAMPLE_H__