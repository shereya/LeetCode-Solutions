//507/507 cases passed
bool isValidSudoku(char** board, int boardSize, int* boardColSize){
    int c;
    int flag=0;
    int flagsub=0;
    int el;
    for(int i=0;i<9;i++)
    {
        for(int j=0;j<9;j++)
        {
            int el=board[i][j]-'0';
            if(el>=1&&el<=9)
            {
                int c=-2;
                for(int k=0;k<9;k++) //columns change
                {
                    if(el==board[i][k]-'0')
                    {
                        c++;
                    }
                }
                for(int k=0;k<9;k++)
                {
                    if(el==board[k][j]-'0')
                    {
                        c++;
                    }
                }
                if(c!=0)
                {
                    flag=1;
                    break;
                }
            }
        }
    }
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            int el=board[i][j]-'0';
            if(el>=1&&el<=9)
            {
                int c=-1;
                for(int k=0;k<3;k++)
                {
                    for(int l=0;l<3;l++)
                    {
                        if(el==board[k][l]-'0'){
                            c++;
                        }
                    }
                }
                //printf("%d %d\n",el,c);
                if(c!=0)
                {
                    flagsub=1;
                    break;
                }
            }
        }
    }
    for(int i=0;i<3;i++)
    {
        for(int j=3;j<6;j++)
        {
            int el=board[i][j]-'0';
            if(el>=1&&el<=9)
            {
                int c=-1;
                for(int k=0;k<3;k++)
                {
                    for(int l=3;l<6;l++)
                    {
                        if(el==board[k][l]-'0'){
                            c++;
                        }
                    }
                }
                //printf("%d %d\n",el,c);
                if(c!=0)
                {
                    flagsub=1;
                    break;
                }
            }
        }
    }
    for(int i=0;i<3;i++)
    {
        for(int j=6;j<9;j++)
        {
            int el=board[i][j]-'0';
            if(el>=1&&el<=9)
            {
                int c=-1;
                for(int k=0;k<3;k++)
                {
                    for(int l=6;l<9;l++)
                    {
                        if(el==board[k][l]-'0'){
                            c++;
                        }
                    }
                }
                //printf("%d %d\n",el,c);
                if(c!=0)
                {
                    flagsub=1;
                    break;
                }
            }
        }
    }
   for(int i=3;i<6;i++)
    {
        for(int j=0;j<3;j++)
        {
            int el=board[i][j]-'0';
            if(el>=1&&el<=9)
            {
                int c=-1;
                for(int k=3;k<6;k++)
                {
                    for(int l=0;l<3;l++)
                    {
                        if(el==board[k][l]-'0'){
                            c++;
                        }
                    }
                }
                //printf("%d %d\n",el,c);
                if(c!=0)
                {
                    flagsub=1;
                    break;
                }
            }
        }
    }
    for(int i=3;i<6;i++)
    {
        for(int j=3;j<6;j++)
        {
            int el=board[i][j]-'0';
            if(el>=1&&el<=9)
            {
                int c=-1;
                for(int k=3;k<6;k++)
                {
                    for(int l=3;l<6;l++)
                    {
                        if(el==board[k][l]-'0'){
                            c++;
                        }
                    }
                }
                //printf("%d %d\n",el,c);
                if(c!=0)
                {
                    flagsub=1;
                    break;
                }
            }
        }
    }
   for(int i=3;i<6;i++)
    {
        for(int j=6;j<9;j++)
        {
            int el=board[i][j]-'0';
            if(el>=1&&el<=9)
            {
                int c=-1;
                for(int k=3;k<6;k++)
                {
                    for(int l=6;l<9;l++)
                    {
                        if(el==board[k][l]-'0'){
                            c++;
                        }
                    }
                }
                //printf("%d %d\n",el,c);
                if(c!=0)
                {
                    flagsub=1;
                    break;
                }
            }
        }
    }
    for(int i=6;i<9;i++)
    {
        for(int j=0;j<3;j++)
        {
            int el=board[i][j]-'0';
            if(el>=1&&el<=9)
            {
                int c=-1;
                for(int k=6;k<9;k++)
                {
                    for(int l=0;l<3;l++)
                    {
                        if(el==board[k][l]-'0'){
                            c++;
                        }
                    }
                }
                //printf("%d %d\n",el,c);
                if(c!=0)
                {
                    flagsub=1;
                    break;
                }
            }
        }
    }
    for(int i=6;i<9;i++)
    {
        for(int j=3;j<6;j++)
        {
            int el=board[i][j]-'0';
            if(el>=1&&el<=9)
            {
                int c=-1;
                for(int k=6;k<9;k++)
                {
                    for(int l=3;l<6;l++)
                    {
                        if(el==board[k][l]-'0'){
                            c++;
                        }
                    }
                }
                //printf("%d %d\n",el,c);
                if(c!=0)
                {
                    flagsub=1;
                    break;
                }
            }
        }
    }
    for(int i=6;i<9;i++)
    {
        for(int j=6;j<9;j++)
        {
            int el=board[i][j]-'0';
            if(el>=1&&el<=9)
            {
                int c=-1;
                for(int k=6;k<9;k++)
                {
                    for(int l=6;l<9;l++)
                    {
                        if(el==board[k][l]-'0'){
                            c++;
                        }
                    }
                }
                //printf("%d %d\n",el,c);
                if(c!=0)
                {
                    flagsub=1;
                    break;
                }
            }
        }
    }
    if(flag==0&&flagsub==0)
    {
        return true;
    }
    else
    {
        return false;
    }
}
