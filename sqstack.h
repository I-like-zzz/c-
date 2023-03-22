#ifndef SQSTACK_H_
#define SQSTACK_H_
#define maxsize 32
typedef int  datatype;
typedef void printf_all(const datatype);
typedef struct node_st{
    datatype data[maxsize];
    int top;
}sqstack;
sqstack *st_increat(void);

int st_push(sqstack *,datatype *);

int st_pop(sqstack *,datatype *);

void st_show(sqstack *,printf_all *);

int st_top(sqstack *,datatype *);

int st_isempty(sqstack*);

void st_destory(sqstack*);

#endif