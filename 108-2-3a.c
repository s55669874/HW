/*  probID: W3-1-Expression  */

int precedence( char opt)
{
           switch (opt )
           {
                      case '+':
                      case '-':
                                 return 1;

                      case '*':
                      case '/':
                                 return 2;
           }
}

int calculation(int left , int right , int type[], int integers[], char symbols[])
{
           int i;
           int candidate=0, cur_min;
           /*此二數值用來找最後的運算子*/

           if(left==right)
                      return integers[left];

           for(i=left;i<=right;i++)
           {
                      if(type[i]==0)
                                 continue;

                      if(candidate==0 || /*也等於!candidate*/
                         precedence(symbols[i])<=precedence(symbols[cur_min]))
                      {
                                 candidate=1;/*找出要在哪裡分割陣列*/
                                 cur_min=i;
                      }
           }

           if(candidate)
           {
                      int j, g;
                      j=calculation(left, cur_min-1, type, integers, symbols);
                      g=calculation(cur_min+1, right, type, integers, symbols);

                      switch (symbols[cur_min])
                      {
                                 case '+':return j+g;
                                 case '-':return j-g;
                                 case '*':return j*g;
                                 case '/':return j/g;
                      }
           }

           //return calculation(left+1, left-1, type, integers, symbols);
}

int expr_evaluation(int n, int type[], int integers[], char symbols[])
{
            calculation(0, n-2, type, integers, symbols);
}
