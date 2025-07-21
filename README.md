# c-language


int main() {
int i  = 0;
printf("\n%d",i);
 i++;
printf("\n%d",i);
int new_val = i++;
printf("\n%d",new_val);
++i;
printf("\n%d",i);
--i;
printf("\n%d",i);

new_val = --i;
printf("\n%d",new_val);

i++;
i--;
printf("\n%d",i);

int j = --i;
j = ++i;
printf("\n%d",j);


return 0;
