/*2351114 �쿡�� ��15*/
#pragma once

//��menu.cpp��
char menu();//�˵�����

//��graph.cpp��
void print_without_edge(int mp[12][12], int r, int c, int op);
void visual_show_same(int mp[12][12], int r, int c,int op);
int visual_remove(int mp[12][12], int r, int c, int op);
void dfs(int mp[12][12], int vis[12][12], int r, int c, int op);
void visual_replace_by_0(int mp[12][12], int r, int c);
void visual_renew(int mp[12][12], int  r, int c);
void visual_show_potential(int vis[12][12],int mp[12][12], int r, int c);
bool choose_ball(int mp[12][12], int nr, int nc, int pr, int pc);

//��tools.cpp��
void pause(int time=10);
void show_score(int now);
bool check_end(int vis[12][12], int r, int c);

//��base.cpp��
void game(int op);
void initial_mp(int mp[12][12], int x, int y);
void show_mp(int mp[12][12], int r, int c);
void show_same(int mp[12][12], int r, int c);
bool check_same(int mp[12][12], int r, int c);
void replace_by_0(int mp[12][12], int r, int c);
bool check_full_0(int mp[12][12], int r, int c);
void renew(int mp[12][12], int r, int c,int op);
void show_0(int mp[12][12], int r, int c);
void show_potential(int mp[12][12], int r, int c);