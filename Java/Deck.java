public class Deck {
	     public static void main(String[] args) {
              int[] deck = new int[104];
		          String[] suits = {"Clubs", "Diamond", "Heart", "Spade", "Clubs", "Diamond", "Heart", "Spade"};
		          String[] ranks = {"Ace", "2", "3", "4", "5", "6", "7", "8", "9", "10", "Jack", "Queen", "King", "Ace", "2", "3", "4", "5", "6", "7", "8", "9", "10", "Jack", "Queen", "King"};

              //initialize the deck
		          for( int i = 0; i < deck.length; i++) deck[i] = i;
              //shuffle deck
		          for( int i = 0; i < deck.length; i++) {
                			int rand = (int)(Math.random() * deck.length);
                			int temp = deck[i];
                			deck[i] = deck[rand];
                			deck[rand] = temp;
		          }

          		for( int i = 0; i < 2; i++) {
          			      String suit = suits[deck[i] / 26];
          			      String rank = ranks[deck[i] % 26];
          			      System.out.println(rank + " of " + suit);
          		}
        }
}
