
public class Heartbeat {

	public static void main(String[] args) {
		int n = 0;
		while(true)
		{
			System.out.println(n + " sec have lapsed");
			n++;
			try
			{
				Thread.sleep(1000);
			}
			catch(InterruptedException e)
			{
				
			}
		}
	}

}
