package day16;

public class Car {
	final int wheel = 4;
	public String brand;
	protected String color;
	private int price;
	
	public Car() {
		System.out.println("�θ� Ŭ������ �⺻ ������");
	}
	
	public Car(String brand, String color, int price) {
		this.brand = brand;
		this.color = color;
		this.price = price;
	}
	
	void engineStart() {
		System.out.println("����� �õ� Ŵ");
	}
	
	void engineStop() {
		System.out.println("����� �õ� ��");
	}

	public int getPrice() {
		return price;
	}

	public void setPrice(int price) {
		this.price = price;
	}
	
}
