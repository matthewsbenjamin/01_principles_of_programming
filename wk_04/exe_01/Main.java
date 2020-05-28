/*
 * Modify the code below so that 
 * 
 * 1. So that numbers less than 10 are padded when printed 
 * i.e. 01 : 59 : 59 rather than 1 : 59 : 59
 *
 * 2. So that the time includes miliseconds 
 * e.g. 01 : 59 : 59 : 999
*/

public class Main {

  public static void main(String[] args) {
		Counter hours = new Counter(24, 1);
		Counter mins = new Counter(60, 59);
		Counter sec = new Counter(60, 58);
		Counter msec = new Counter(1000, 997);

		int i = 0;
		while(i < 10){

			System.out.printf( "%02d:%02d:%02d:%03d\n", hours.getCount(), mins.getCount(), sec.getCount(), msec.getCount());
			msec.tick();
			
			if(msec.getCount() == 0) {
				sec.tick();
				if(sec.getCount() == 0){
					mins.tick();
					if(mins.getCount() == 0){
						hours.tick();
					}
				}
			}
			i++;
		}
  }
}