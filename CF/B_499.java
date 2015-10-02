import java.util.*;
public class B_499 {
	static Scanner sc=new  Scanner(System.in);
	
	public static void main (String args[]) {
		String lan1,lan2;
		Map<String,String>dictionary = new HashMap<String,String>(3015);
		
		int i,wordsInLecture,wordsInDictionary,j;
		
		wordsInLecture=sc.nextInt();
		wordsInDictionary=sc.nextInt();
		
		for(i=1;i<=wordsInDictionary;i++){
			lan1=sc.next();
			lan2=sc.next();
			dictionary.put(lan1,lan2);
		}
		for(i=1;i<=wordsInLecture;i++){
			lan1=sc.next();
			lan2=dictionary.get(lan1);
			if(lan1.length()<=lan2.length()){
				System.out.print(lan1+" ");
			}
			else System.out.print(lan2+" ");
		}
		System.out.println("");
	}
}
