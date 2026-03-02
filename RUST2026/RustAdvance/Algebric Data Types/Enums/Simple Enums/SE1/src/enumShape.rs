// enums with shape circle and rectangle 
#[derive(Debug)]
enum Shape {
    Circle(f64),
    Rectangle(f64,f64),
}

impl Shape {
    fn new_circle (radius : f64) -> Self {
        Self::Circle(radius)
    }
    fn new_ractangle (lenght : f64 , breadth : f64) -> Self {
        Self::Rectangle(lenght,breadth)
    } 
}

fn main() {
    let circle = Shape::Circle(12.11111);
    let circle1 = Shape::new_circle(12.12);
    let rectangle = Shape::Rectangle(10.11,12.123);
    let rectangle1 = Shape::new_ractangle(11.2345,12.432);

    println!("Circle : {:?}",circle);
    println!("Circle : {:?}",circle1);
    println!("Rectangle : {:?}",rectangle);
    println!("Rectangle1 : {:?}",rectangle1);

}