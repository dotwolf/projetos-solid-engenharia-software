# Trabalho de Engenharia de Software
 
Os princípios escolhidos foram Single Responsiblity Principle (Princípio da responsabilidade única), Open-Closed Principle (Princípio Aberto-Fechado), Composição a Herança e Demeter.

# Single Responsiblity Principle

Ocorre quanto classes ou módulos possuem uma única responsabilidade. Por exemplo, neste [código incorreto](https://github.com/dotwolf/projetos-solid-engenharia-software/blob/main/exemplos/incorretos/responsabilidade_Unica.hpp), a classe Personagem possui diversas funcionalidades diferentes, o que causa dificuldade em entendimento e modificação. Já neste [código correto](https://github.com/dotwolf/projetos-solid-engenharia-software/blob/main/exemplos/corretos/responsabilidade_unica.hpp), cada classe tem sua funcionalidade definida.

# Open-Closed Principle

O princípio define que classes devem ser abertas a extensões, mas não a modificações. Por exemplo, neste [código incorreto](https://github.com/dotwolf/projetos-solid-engenharia-software/blob/main/exemplos/incorretos/principio_aberto_fechado.hpp), a função calcularDano deve ser atualizada cada vez que um tipo de ataque é adicionado, alterado ou removido. Já neste [código correto](https://github.com/dotwolf/projetos-solid-engenharia-software/blob/main/exemplos/corretos/principio_aberto_fechado.hpp), as classes de tipos de danos diferentes sobrescrevem a classe de dano, não necessitando alterar a classe original.

# Prefira Composição a Herança

O princípio recomenda composição utilizando construção de classes do que heranças de classes. Por exemplo, neste [código incorreto](https://github.com/dotwolf/projetos-solid-engenharia-software/blob/main/exemplos/incorretos/composicao_a_heranca.hpp), as classes herdam das outras, criando maior complexidade, enquanto neste [código correto](https://github.com/dotwolf/projetos-solid-engenharia-software/blob/main/exemplos/corretos/composicao_a_heranca.hpp), as classes se compoem utilizando elementos básicos das outras, como "atributos" e "habilidades".

# Demeter

O princípio foca na diminuição de acoplamento entre objetos. Por exemplo, neste [código incorreto](https://github.com/dotwolf/projetos-solid-engenharia-software/blob/main/exemplos/incorretos/demeter.hpp), existem diversos acoplamentos confusos no último return, como 'getInventario().getPeso()', enquanto neste [código correto](https://github.com/dotwolf/projetos-solid-engenharia-software/blob/main/exemplos/corretos/demeter.hpp), todos os objetos possuem acoplamento mínimo para facilitar o entendimento.
