use std::io;

fn main() {
    // Variáveis para armazenar os números
    let mut a = String::new();
    let mut b = String::new();

    // Ler os números do terminal
    io::stdin().read_line(&mut a).expect("Erro ao ler o número");

    io::stdin().read_line(&mut b).expect("Erro ao ler o número");

    // Converter os números para tipos numéricos (f64)
    let a: f64 = a.trim().parse().expect("Digite um número válido");
    let b: f64 = b.trim().parse().expect("Digite um número válido");

    // Soma
    let x = a + b;

    // Resultado
    println!("X = {}", x);
}

