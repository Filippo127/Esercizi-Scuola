import java.net.*;
import java.io.*;

public class Client
{
	public static void main(String[] args) {
	    
	    try {
		Socket client = new Socket ("google.it", 80);
		DataOutputStream outVersoServer = new DataOutputStream(new BufferedOutputStream(client.getOutputStream()));
        BufferedReader inDalServer = new BufferedReader(new InputStreamReader(client.getInputStream()));
    
    
    outVersoServer.writeBytes("GET / HTTP/1.0 \rHost: " + "google.it\r\n\r\n");
    outVersoServer.flush();
    
    
    String stringaRicevutaDalServer;
	while ((stringaRicevutaDalServer = inDalServer.readLine()) != null)
    System.out.println(stringaRicevutaDalServer);
    client.close();
	    } catch(Exception e) {
    System.out.println(e);
}

	}
}