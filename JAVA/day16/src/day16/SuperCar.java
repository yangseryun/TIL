package day16;

public class SuperCar extends Car{
	String mode;
	
	public SuperCar() {
		System.out.println("�ڽ� Ŭ������ �⺻ ������");
	}
	
	public SuperCar(String brand, String color, int price,String mode) {
		super(brand,color,price);
		//setPrice(price);
		this.mode = mode;
		
	}
	
	@Override
	void engineStart() {
		System.out.println("�������� �õ� Ŵ");
	}
	
	@Override
	void engineStop() {
		System.out.println("�������� �õ� ��");
	}
	
	@Override
	public String toString() {
		return "�귣�� : "+brand + "\n���� : "+color+"\n���� : "+getPrice()+"����";
	}
}
