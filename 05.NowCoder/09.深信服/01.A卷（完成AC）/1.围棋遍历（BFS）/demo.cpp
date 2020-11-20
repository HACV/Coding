#include <stdio.h>
#include <string.h>

enum color {
    NONE, WHITE, BLACK,         //������ɫ��NONE��ʾδ����
};
struct weiqi {
    enum color board[19][19];   //������ÿ��λ�õ�����
};

//---------------------------------------------------- 
int test[19][19];//����BFS�����ڼ�֦
void BFS(struct weiqi *wq, int x, int y,int &res, int val)
{
    if((x<0)||(y<0)||(x>18)||(y>18))
    return ;
    
    if(val!=(wq->board[y][x]))
	return ;
	
	if(test[y][x]==0&&val==(wq->board[y][x]))
	{
		res++;
		test[y][x]=1;
	}
	else
	{
		return;
	}
    
    BFS(wq, x, y-1,res, val);//�� 
    BFS(wq, x, y+1,res, val);//�� 
    BFS(wq, x-1, y,res, val);//�� 
    BFS(wq, x+1, y,res, val);//�� 
    
    return ;
}
 
int calc(struct weiqi *wq, int x, int y)
{
    //TODO:
    int res=0;
    int val = wq->board[y][x];//�ӵĵط� 
    if(val==0)//������� 
    {
    	return 0;
	}
    
	BFS(wq, x, y,res, val);
	return res; 
}
//------------------------------------------------------------------------
int input(struct weiqi *wq, int *x, int *y)
{
    int row, col;
    int ret;
    char buf[80];
    
    for (row = 0; row < 19; ++row) {
        if (fgets(buf, sizeof(buf), stdin) == NULL)
            return -1;
        if (strlen(buf) < 19)
            return -1;
        for (col = 0; col < 19; ++col) {
            switch (buf[col]) {
            case '0':
                wq->board[row][col] = NONE;
                break;
            case '1':
                wq->board[row][col] = WHITE;
                break;
            case '2':
                wq->board[row][col] = BLACK;
                break;
            default:
                return -1;
            }
        }
    }
    ret = fscanf(stdin, "%d,%d\n", x, y);
    if (ret != 2)
        return -1;
    for (row = 0 ; row < 19; ++row) {
        for (col = 0; col < 19; ++col) {
            fprintf(stderr, "%d ", wq->board[row][col]);
        }
        fprintf(stderr, "\n");
    }
    fprintf(stderr, "x = %d, y = %d\n", *x, *y);
    return 0;
}

int main()
{
    struct weiqi wq;
    int x = 0, y = 0;
    int cnt;

    memset(&wq, 0, sizeof(wq));
    if (input(&wq, &x, &y) < 0) {
        fprintf(stderr, "error!\n");
        return 1;
    }
    cnt = calc(&wq, x, y);

    printf("%d\n", cnt);
    return 0;
}
