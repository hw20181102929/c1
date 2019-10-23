void LevelorderTraversal( BinTree BT )
{
    if(BT)
    {
        BinTree p[100];
        int front=0;
        int rear=0;
        p[++rear]=BT;
        while(front!=rear)
        {
            BinTree p1;
            p1=p[++front];
            printf(" %c",p1->data);
            if(p1->Left!=NULL)p[++rear]=p1->Left;
            if(p1->Right!=NULL)p[++rear]=p1->Right;
        }
    }
}
