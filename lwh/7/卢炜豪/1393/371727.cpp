
//#include "stdafx.h"
#include <stdio.h>
#include <iostream>
#define Max 105
using namespace std;
typedef struct srt_node {
	int vertex;		//顶点值
	int weight;		//权值
	int out_degree;		//入度
	int in_degree;		//出度
}Node;
int main()
{
	int vertxt_num = 0,edge_num = 0;
	while (cin >> vertxt_num >> edge_num) {
		Node node[Max];//定义一个图
		for (int i = 0; i < Max; i++) {
			node[i].vertex  =node[i].in_degree = node[i].out_degree = 0;
		}
		int left_vertext=0, right_vertext=0;
		for (int i = 0; i < edge_num; i++) {
			cin >> left_vertext >> right_vertext;
			node[left_vertext].out_degree++;
			node[right_vertext].in_degree++;
			node[left_vertext].vertex = 1;
			node[right_vertext].vertex = 1;
		}
		int flag = 0;
		for (int i = 1; i <Max; i++) {
			
			if (node[i].in_degree == 0 && node[i].vertex==1) {
				flag = 1;
				//printf("node[%d].indegree=%d\n", i, node[i].in_degree);
			}
		}
		if (edge_num == 0)
			flag = 1;
		if (flag == 1) {
			printf("YES\n");
		}
		else {
			printf("NO\n");
		}
	}
}