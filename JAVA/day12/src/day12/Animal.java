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
		System.out.println(name+"��(��)"+feed+"��(��) �Դ���.");
	}
	void sleep() {
		System.out.println(name+"��(��) �ڴ���.");
	}
	
	public static void main(String[] args) {
		Animal cat = new Animal();
		Animal dog = new Animal();
		Animal pig = new Animal("���",4,35.2,"��� ","�ܲ�");
		
		pig.eat();
		pig.getSound();
		pig.sleep();
		
	}
}
