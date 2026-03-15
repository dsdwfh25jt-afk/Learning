#[derive(Debug)]
struct Account {
    user_name: String ,
    user_id: String ,
    balance: f64 ,
}

fn main() {
    let _23498674 = Account {
        user_name: String::from("native dev"),
        user_id: String::from("native_dev_23414"),
        balance: 0.0 ,
    };

    dbg!(&_23498674);

}