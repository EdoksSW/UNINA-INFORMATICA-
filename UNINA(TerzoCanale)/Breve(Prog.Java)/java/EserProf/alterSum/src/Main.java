public class Main
{
    public static void main(String[] args)
    {
        int[] nums={1,4,9,16,9,7,4,9,11};
        boolean sumSot=false;
        int sum=nums[0];
        for(int i=1; i< nums.length;i++)
        {
            if(sumSot)
            {
                sum+=nums[i];
                sumSot=false;
            }
            else
            {
                sum-=nums[i];
                sumSot=true;
            }
        }
        System.out.println("Risultato->"+sum);
    }
}