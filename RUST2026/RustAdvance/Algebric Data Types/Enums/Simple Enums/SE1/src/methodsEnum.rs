// Methods with enums
#[derive(Debug)]
enum Message {
    Read,
    Write(String),
}

impl Message {
    fn call (&self) {
        println!("{:?}",self);
    }
}

fn main() {
    let something = Message::Write(String::from("Pakistani aand forces"));
    something.call();
}