package day12;

public class Animal {
	String name;
	int age;
	double wieght;
	String feed;
	String sound;
	
	public Animal() {
		
	}
	
	public Animal(String name, int age, double wieght, String feed, String sound) {
		this.name = name;
		this.age = age;
		this.wieght = wieght;
		this.feed = feed;
		this.sound = sound;
	}
	void getSound(){
		System.out.println(sound);
	}
	
	void eat() {
		System.out.println(name+"ÀÌ(°¡)"+feed+"À»(¸¦) ¸Ô´ÂÁß.");
	}
	void sleep() {
		System.out.println(name+"ÀÌ(°¡) ÀÚ´ÂÁß.");
	}
	
	public static void main(String[] args) {
		Animal cat = new Animal();
		Animal dog = new Animal();
		Animal pig = new Animal("¹è²Å",4,35.2,"°î½Ä ","²Ü²Ü");
		
		pig.eat();
		pig.getSound();
		pig.sleep();
		
	}
}
