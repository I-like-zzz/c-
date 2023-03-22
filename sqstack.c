#include<stdio.h>
#include<stdlib.h>
#include"sqstack.h"

sqstack *st_increat(void){
        sqstack*me=malloc(sizeof(sqstack));
        me->top=-1;
        if(me==NULL)return NULL;
        return me;
}
int st_push(sqstack *me,datatype *in_data){
    if(me->top==(maxsize-1))return -1;
        me->data[++me->top]=*in_data;
        return 0;
}
int st_pop(sqstack *me,datatype *in_data){
                if(st_isempty(me)) return -1;
                *in_data=me->data[me->top--];
                return 1;
}
void st_show(sqstack *me,printf_all * pr){
        if(st_isempty(me)) return ;
        for(int i=0;i<=me->top;i++){
            pr(me->data[i]);
        }
}
int st_top(sqstack *me,datatype *in_data){
                 if(st_isempty(me)) return -1;
                *in_data=me->data[me->top];
                return 1;
}
int st_isempty(sqstack* me ){
        if(me->top==-1) return 1;
        else return 0;
}
void st_destory(sqstack*me){
        free(me);
}