//
//  Graph.h
//  DataStructure
//
//  Created by zhaoyang on 2020/7/14.
//  Copyright © 2020 Dayer. All rights reserved.
//

#ifndef Graph_h
#define Graph_h

/* 抽象数据结构
 CreateGraph(*G,V,VR) 按照顶点集V和边弧集VR定义构造图G
 DestoryGraph(*G) 图G存在则销毁
 LocateVex(G,u) 如图G中存在顶点u, 则返回图中位置
 GetVex(G,v) 返回图中顶点v的值
 PutVex(G,v,value) 将图G中顶点v的值赋值为value
 FirstAdjVex(G,*v) 返回顶点v的一个邻接顶点, 若顶点在G中无邻接顶点返回空
 NextAdjVex(G,v,*w) 返回顶点v相对于顶点w的下一个邻接顶点, 若w是v的最后一个邻接点则返回空
 InsertVex(*G,v) 在图G中增加新顶点v
 DeleteVex(*G,v) 删除图G中顶点v及其相关的弧
 InsertArc(*G,v,w) 在图G中删除弧<v,w>, 若G是无向图, 则需要增添对称弧<w,v>
 DeleteArc(*G,v,w) 在图G中删除弧<v,w>, 若G是无向图, 则还需删除对称弧<w,v>
 DFSTraverse(G) 对图G中进行深度优先遍历, 在遍历过程对每个顶点调用
 HFSTraverse(G) 对图G中进行广度优先遍历, 在遍历过程对每个顶点调用
 
 */




#include <stdio.h>

// 邻接矩阵
typedef char VertexType;    // 顶点类型, 自定义
typedef int EdgeType;       // 权值类型, 自定义
#define MAXVEX 100
#define INFINITY 65535      // 65535是计算机16位二进制最大数, 代替极限值

typedef struct {
    VertexType vexs[MAXVEX]; // 顶点表
    EdgeType arc[MAXVEX][MAXVEX]; // 邻接矩阵, 也可以看做边表
    int numVertexes, numEdges; // 顶点数, 边树数
}MGraph;


// 构造图, 就是向顶点表和边表填入数据的过程

// 无向网图
void CreateGraph(MGraph *G);
#endif /* Graph_h */
