import java.net.*;
import java.util.Scanner;
import java.io.*;

public class Server {

	public static void main(String[] args) {

		try {

			ServerSocket server = new ServerSocket(755);
			Socket client = server.accept();
			server.close();
			
			BufferedReader inDalClient = new BufferedReader(new InputStreamReader(client.getInputStream()));
			DataOutputStream outVersoClient = new DataOutputStream(new BufferedOutputStream(client.getOutputStream()));
			
			String stringaRicevutaDalClient = inDalClient.readLine();
			
			
			while ((stringaRicevutaDalClient = inDalClient.readLine()) != null)
				System.out.println(stringaRicevutaDalClient);
			
			
			outVersoClient.writeBytes("Messaggio al client\n");
			outVersoClient.flush();
			client.close();

	
		}
		catch(Exception e) {
			System.out.println("ERROR" + e);
		}	
		
	}
		

}
