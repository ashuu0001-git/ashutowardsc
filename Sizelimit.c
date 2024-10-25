/*program to find out the size and limit of data types*/
#include<stdio.h>
#include<limits.h>
#include<float.h>
int main(void)
{
    printf("sizeof (char)= %lu\n",sizeof (char));
    printf("sizeof (short)= %lu\n",sizeof (short));
    printf("sizeof (int)= %lu\n",sizeof( int));
    printf("sizeof (long)= %lu\n",sizeof (long));
    printf("sizeof (float)= %lu\n",sizeof (float));
    printf("sizeof (double)= %lu\n",sizeof (double));
    printf("sizeof (long double)= %lu\n",sizeof (long double));

    printf("SCHAR_MIN= %d\n",SCHAR_MIN);
    printf("SCHAR_MAX= %d\n",SCHAR_MAX);
    printf("VCHAR_MAX= %d\n",UCHAR_MAX);

    printf("SHRT_MIN= %d\n",SHRT_MIN);
    printf("SHRT_MAX= %d\n",SHRT_MAX);
    printf("USHRT_MAX= %u\n",USHRT_MAX);

    printf("INT_MIN= %d\n",INT_MIN);
    printf("INT_MAX= %d\n",INT_MAX);
    printf("UINT_MAX= %u\n",UINT_MAX);
    
    printf("LONG_MIN= %ld\n",LONG_MIN);
    printf("LONG_MAX= %ld\n",LONG_MAX);
    printf("ULONG_MAX= %lu\n",ULONG_MAX);

    printf("FLT_MIN= %e\n",FLT_MIN);
    printf("FLAT_MAX= %e\n",FLT_MAX);

    printf("DBL_MIN= %e\n",DBL_MIN);
    printf("DBL_MAX= %e\n",DBL_MAX);

    printf("LDBL_MIN= %Le\n",LDBL_MIN);
    printf("LDBL_MAX= %Le\n",LDBL_MAX);

 // NUMBER OF DIGITS OF PRECISION

printf("FLT_DIG= %d\n",FLT_DIG);
printf("DBL_DIG= %d\n",DBL_DIG);
printf("LDBL_DIG= %d\n",LDBL_DIG);

return 0;

}
