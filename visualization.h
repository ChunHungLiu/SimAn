#ifndef _VISUALIZATION_H_
#define _VISUALIZATION_H_

#include "glut.h"
#include "DataPlace.h"
#include "BBox.h"
#include <math.h>
#pragma comment(lib, "glut32.lib")

void draw_circle(double x, double y, double r);									// ������������ ���������� �� �������� ����������� ������ � �������
void draw_quads(double x, double y, double a);									// ������������ ������� �� �������� ����������� ������ � ����� �������
void draw_cross(double x, double y, double k);									// ������������ ����� �� �������� ����������� ������ � ������������ ���������������
void draw_scene();																// ������������ �������� �����������, �� ������� � ���������� ����� ������������� ��� ��������
void render_scene();															// �������, ������ ������� ���������� ��� ������� OpenGL, ���������� �� ���������
void keyboard_control(unsigned char key, int, int);								// �������, �������������� ���������� ����������� ����������� � ������� ����������
void mouse_control(int button, int state, int x, int y);						// �������, �������������� ���������� ����������� ����������� � ������� ����
void mouse_move(int x, int y);													// �������, �������������� ��������� ���������� ����������� � ������������ � ������������ ����
void timf(int value);															// �������, ���������� �� �������������� �������� �����
void opengl_control(int argcp, char **argv);									// �������, ������ ������� �������������� ����� ���� ��������� � OpenGL �������

#endif