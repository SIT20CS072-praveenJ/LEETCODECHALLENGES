import java.util.*;
public class Main
{
	public static void main(String[] args) {
		//System.out.println("Hello World");
		Scanner sc=new Scanner(System.in);
		int n=sc.nextInt();
		int[] arr=new int[n];
		for(int i=0;i<n;i++){
		    arr[i]=sc.nextInt();
		}int currsum=0;
		int maxsum=0;
		for(int i=0;i<n;i++)
		{
		    currsum+=arr[i];
		    if(currsum>maxsum)
		    {
		        maxsum=currsum;
		    }if(currsum<0){
		        currsum=0;
		    }
		}System.out.println(maxsum);
		
	}
}
