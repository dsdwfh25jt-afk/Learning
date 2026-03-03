#[derive(Debug)]
enum State {
    Alaska,
    Alabama,
}
enum Coin {
    Penny,
    Quartur(State),
}

fn main() {
    println!("Hello, world!");
    let coin = Coin::Quartur(State::Alabama);
    println!("This is the result : {:?}",values(coin))
}

fn values (coins : Coin) -> u8 {
    match  coins{
        Coin::Penny => 1,
        Coin::Quartur(state) => {
            println!("This values are from the function values : {:?}",state);
            25
        }
    }

}