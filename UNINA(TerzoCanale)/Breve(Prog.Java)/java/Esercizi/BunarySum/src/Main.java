public class Main
{
    public static void main(String[] args)
    {
        int bin1, bin2;
        int resto=0;
        int i=0;
        int[] binSum= new int[20];
        bin1=110;
        bin2=101;
        while(bin1!=0 || bin2!=0)
        {
            binSum[i++]=(int)((bin1%10)+(bin2%10)+resto)%2;
            resto=(int)((bin1%10)+(bin2%10)+resto)/2;
            bin1/=10;
            bin2/=10;
        }

        if(resto!=0) binSum[i++]=resto;
        --i;
        while(i>=0)
        {
            System.out.println(binSum[i--]);
        }
    }
}