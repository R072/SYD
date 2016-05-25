#include<stdio.h>



int calc(int S31class,int S31level,int S31point,int *min,int *mid,int *max)
{
  int S31cof;

  S31cof = 0;
    
  switch(S31class){
  case 1:
    S31cof = 13;break;
  case 2:
    S31cof = 14;break;
  case 3:
    S31cof = 15;break;
  }
  
  if (S31class == 1) {
    if (S31level == 40 || S31level == 60) S31point -= 3;
  }
  if (S31class == 2) {
    if (S31level == 60 || S31level == 80) S31point -= 4;
  }
  if (S31class == 3) {
    if (S31level == 80 || S31level == 100) S31point -= 5;
  }

  *min = S31point - ( --S31level ) * S31cof;
  *max = (40 + (S31class * 20)) * S31cof + *min - 10;
  *mid = (40 + ((S31class - 1) * 20)) * S31cof + *min - 10;

  return 3;
}



int main(int argc ,char *argv[])
{
  int S31level,S31point,S31class,S31min,S31mid,S31max;
  int num;
  
  scanf("%d", &S31class);
  scanf("%d", &S31level);
  scanf("%d", &S31point);

  num = calc(S31class, S31level, S31point, &S31min, &S31mid, &S31max);
  printf("#================#\n");
  printf("# min  mid  max  #\n");
  printf("# %d %d %d #\n", S31min, S31mid, S31max);
  printf("#================#\n");
  return 1;
}
