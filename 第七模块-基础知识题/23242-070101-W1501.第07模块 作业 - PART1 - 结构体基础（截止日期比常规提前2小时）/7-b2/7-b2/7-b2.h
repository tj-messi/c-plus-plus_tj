/* 学号 班级 姓名*/
#pragma once

/* 定义POP型菜单所需要的结构体 */
struct PopMenu {
	const char* title;	//标题
	int start_x;	//左上角x坐标
	int start_y;	//左上角y坐标
	int width;		//菜单宽度，不含左右边框（+4是显示的实际列数），必须是偶数
	int high;		//菜单高度，不含上下边框（+2是显示的实际行数），
	int bg_color;	//所用背景色（注：选中项background/foreground为反显）
	int fg_color;	//所用前景色
};

#define MAX_ITEM_LEN	80
int pop_menu(const char menu[][MAX_ITEM_LEN], const struct PopMenu* para);
