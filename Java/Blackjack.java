import java.util.Scanner;
public class Blackjack{
				public static void main(String[] args){
								int money = 100;
								int bet;
								boolean userWins;
												while (true){
																do{
																				System.out.println("You have " + money + " dollars.");
																				System.out.print("Please enter your bet: ");
																				Scanner in = new Scanner(System.in);
																				bet = in.nextInt();
															}while(bet < 0 || bet > money);
															if(bet == 0) break;
															if(bet > 0) money = money - bet;
															System.out.println(money);

												}
				}
}
