
import java.util.Scanner;

// Classes Exception
class PosicaoInvalidaException extends RuntimeException {
    public PosicaoInvalidaException(String msg) {
        super(msg);
    }
}
class NenhumItemException extends RuntimeException {
    public NenhumItemException(String msg) {
        super(msg);
    }
}
class EspacoInsuficienteException extends RuntimeException {
    public EspacoInsuficienteException(String msg) {
        super(msg);
    }
}

/* Cada elemento de uma lista contém um valor qualquer 
e um ponteiro apontando para o próximo elemento da lista */

interface LinkedList<E> {

    void adicionar(E e);           // adiciona e no final da lista
    void adicionar(int p, E e);    // adiciona e na posição p
    E remover();                   // remove primeiro elemento
    E remover(int p);              // remove elemento da posição p
    void set(int p, E e);          // o elemento da posição p passa a ser e
    E get(int posicao);            // retorna o elemento da posição p, sem remover      
    int tamanho();                 // número de elementos na lista
    boolean vazia();               /* true se lista não possuir nenhum elemento,
                                   false em caso contrário */
    void limpar();                 // remove todos os elementos da lista
    Object[] toArray();            // retorna um vetor contendo os elementos da lista
    <T> void toArray(T[] t);       // carrega os elementos da lista no vetor t
}

// Todo elemento da Lista simplesmente encadeada será um objeto CelulaSimples
class CelulaSimples<E> {
    
    // Declarando Variáveis 
    // Obs: Declaramos o valor como tipo genérico para ele poder ser qualquer coisa
    
    private E valor;                  // Valor do elemento
    private CelulaSimples<E> prox;    // Ponteiro para o próximo elemento da lista
    
    /*
    Obs: Criamos o ponteiro com essa notação, pois ele apontará justamente para um objeto 
    CelulaSimples<Celula>, caso colocassemos apenas Celula, ele apontaria somente para uma 
    váriavel do tipo Celula (tipo generico), e não para o objeto que tem o valor e ponteiro
    */
    
    // Construtores
    
    // Cria uma Célula Simples somente com o valor do elemento
    public CelulaSimples(E valor) {
        this.valor = valor;
        this.prox = null;
    }
    
    // Cria uma Célula Simples com o valor do elemento e do ponteiro
    public CelulaSimples(E valor, CelulaSimples<E> prox){
        this.valor = valor;
        this.prox = prox;
    }
    
    // Getters e Setters
    public E getValor() {
        return valor;
    }
    public void setValor(E valor){
        this.valor = valor;
    }
    public CelulaSimples<E> getProx() {
        return prox;
    }
    public void setProx(CelulaSimples<E> prox){
        this.prox = prox;
    }
}

// Todo elemento da Lista duplamente encadeada será um objeto CelulaDupla
class CelulaDupla<E> {
    
    // Declarando Variáveis 
    // Obs: Declaramos o valor como tipo genérico para ele poder ser qualquer coisa
    
    private E valor;                  // Valor do elemento
    private CelulaDupla<E> prox;      // Ponteiro para o próximo elemento da lista
    private CelulaDupla<E> ant;       // Ponteiro para o elemento anterior da lista
    
    /*
    Obs: Criamos o ponteiro com essa notação, pois ele apontará justamente para um objeto 
    CelulaSimples<Celula>, caso colocassemos apenas Celula, ele apontaria somente para uma 
    váriavel do tipo Celula (tipo generico), e não para o objeto que tem o valor e ponteiro
    */
    
    // Construtores
    
    // Cria uma Célula Dupla somente com o valor do elemento
    public CelulaDupla(E valor) {
        this.valor = valor;
        this.prox = null;
        this.ant = null;
    }
    
    // Cria uma Célula Dupla com o valor do elemento e dos ponteiros
    public CelulaDupla(E valor, CelulaDupla<E> prox, CelulaDupla<E> ant){
        this.valor = valor;
        this.prox = prox;
        this.ant = ant;
    }
    
    // Getters e Setters
    public E getValor() {
        return valor;
    }
    public void setValor(E valor){
        this.valor = valor;
    }
    public CelulaDupla<E> getProx() {
        return prox;
    }
    public void setProx(CelulaDupla<E> prox){
        this.prox = prox;
    }
    public CelulaDupla<E> getAnt() {
        return ant;
    }
    public void setAnt(CelulaDupla<E> ant) {
        this.ant = ant;
    }
}

/* Lista simplesmente encadeada, cada elemento tem um valor qualquer e 
um ponteiro apontando para o próximo elemento da lista */

class SinglyLinkedList<E> implements LinkedList<E> {
    
    private CelulaSimples<E> first = null;      // Será o ponteiro que aponta para o primeiro elemento da lista
    private CelulaSimples<E> last = null;       // Será o ponteiro que aponta para o último elemento da lista
    private int count = 0;                      // Conta os elementos da lista
    
    // Funções da Interface
    // Obs: o que cada função faz está descrito na interface
    
    @Override
    public void adicionar(E e){
        CelulaSimples<E> novo = new CelulaSimples<>(e); // Cria uma celula já com o valor atribuído
        
        // Checa se a lista está vazia
        if (first == null){
            
            // Já que a lista está vazia, iremos apontar ambos ponteiros para a mesma célula
            first = novo;
            last = novo;
        
        } else {
            
            // Caso não esteja, a última celula da lista irá apontar para a nova celula, deixando de ser a última
            last.setProx(novo);
            
            // E agora, a celula criada será a última celula da lista
            last = novo;
            
        }
        
        count++;    // Soma ao contador
    }
    
    @Override
    public void adicionar(int position, E e){
            
        int i = 0;                                       // Para contar a posição
        CelulaSimples<E> novo = new CelulaSimples<>(e);  // Ponteiro que para utilizar no laço for
        CelulaSimples<E> auxiliar = first;               // Sempre que usarmos a função, aux apontará para null
        
        // Caso a posição seja 1, será a mesma coisa que adicionar no ínicio da lista
        if(position == 0){
        novo.setProx(first);
        first = novo;
        }else{
            // Percorre as celulas até chegar na celula da posição inserida
            // Caso o valor seja null, chegou no final da celula
            while (auxiliar != null) {
                if(i == position - 1){
                    
                    // E o endereço guardado passará a ser apontado pela célula criada
                    novo.setProx(auxiliar.getProx());
                    
                    // O endereço anterior passará a apontar para a nova célula
                    auxiliar.setProx(novo);
                }

                auxiliar = auxiliar.getProx();
                i++;
            }
        }
                                                       
        // Caso a posição não exista
        if ((position > tamanho()) || (position < 0)){
            throw new PosicaoInvalidaException("Posicao " + position + " com tamanho " + tamanho() + " não é válida." );
        }
        
        count++;   // Soma ao contador
    }
   
    @Override
    public E remover(){
        
        // Checa se a lista está vazia
        if (vazia()){
            throw new NenhumItemException("A lista está vazia; não possui nenhum elemento.");
        }
            
        // Declarar variável para guardar o valor removido
        CelulaSimples<E> valorRemovido  = first;
        
        // Para remover o primeiro elemento, basta apontar o ponteiro de fisrt, para o segundo elemento
        first = first.getProx(); 
        
        count--;
        
        return valorRemovido.getValor();
    }
    
    @Override
    public E remover(int position){
         
        int i = 0;                                       // Para contar a posição
        CelulaSimples<E> valorRemovido = first;          // Ponteiro que para utilizar no laço for
        CelulaSimples<E> auxiliar = first;               // Sempre que usarmos a função, aux apontará para null 
       
        // Caso a posição não exista
        if ((position + 1 > tamanho()) || (position < 0)){
            throw new PosicaoInvalidaException("Posicao " + position + " com tamanho " + tamanho() + " não é válida." );
        }
        
        // Caso a posição seja 0, será a mesma coisa que remover do ínicio da lista
        if(position == 0){
            first = first.getProx();
        }else{
            // Percorre as celulas até chegar na celula da posição inserida
            // Caso o valor seja null, chegou no final da celula
            while (auxiliar != null) {
                if(i == position - 1){
                    
                    // Iremos guardar o elemento removido
                    valorRemovido = auxiliar.getProx();
                    
                    // Agora este elemento irá apontar para o elemento que o elemento removido apontava
                    auxiliar.setProx(valorRemovido.getProx());
                    
                }
                
                auxiliar = auxiliar.getProx();
                i++;
            }
        }
                                                         
        count--;   // Soma ao contador
        
        return valorRemovido.getValor();
    }
    
    @Override
    public void set(int position, E e){
        
        int i = 0;                                       // Para contar a posição
        boolean existe = false;                          // Verifica se a posição existe
        CelulaSimples<E> auxiliar = first;               // Sempre que usarmos a função, aux apontará para null
        
        while (auxiliar != null) {
            if(i == position){
                auxiliar.setValor(e);
                existe = true; 
                }
            auxiliar = auxiliar.getProx();
            i++;
        }
        
        // Caso a posição não exista
        if(existe == false){
            throw new PosicaoInvalidaException("Posicao " + position + " com tamanho " + tamanho() + " não é válida." );
        }
    } 
    
    @Override
    public E get(int position){
         
        int i = 0;                                        // Para contar a posição
        CelulaSimples<E> buscaPosicao = first;            // Ponteiro que para utilizar no laço for
        CelulaSimples<E> valorEncontrado = first;         // Ponteiro que apontará para a célula da posição inserida
        boolean existe = false;                           // Verifica se a posição existe
        
        // Percorre as celulas até chegar na celula da posição inserida
        // Caso o valor seja null, chegou no final da celula
        while (buscaPosicao != null) {
            if (i == position){
                // Retorna o valor
                valorEncontrado = buscaPosicao;
                existe = true;                     // Para verificar se a posição existe
            }
            i++;                                   // Adiciona 1 na posição  
            buscaPosicao = buscaPosicao.getProx(); // Aponta para a próxima celula
        }
        // Caso a posição não exista
        if(existe == false){
            throw new PosicaoInvalidaException("Posicao " + position + " com tamanho " + tamanho() + " não é válida." );
        }
           
        // Retorna o valor
        return valorEncontrado.getValor();
    }
    
    @Override
    public int tamanho() {
        
        return count;
    }
    
    @Override
    public boolean vazia(){
        
        /* Caso o ponteiro que aponta para o primeiro elemento não esteja apontando para nada
        significa que o primeiro elemento não existe, logo, a lista está vazia; */
        return (first == null);
    }
    
    @Override
    public void limpar() {
        first = null;
        last = null;
    }
    
    @Override
    public Object[] toArray() {
        
        Object[] array =  new Object[tamanho()]; // Criando um vetor com a mesma quantidade de elementos que a lista
        int i = 0;                               // Contador
        CelulaSimples<E> auxiliar = first;
        
        // Laço de repetição
        while(auxiliar != null){
            array[i] = auxiliar.getValor(); // Os elementos do array tem os mesmos valores dos elementos da lista
            auxiliar = auxiliar.getProx();
            i++;
        }
        return array;
    }
    
    @Override
    public <T> void toArray(T[] t) {
        
        // Nessa função temos que passar os elementos da lista para o vetor
        
        // Caso o vetor seja menor que a lista
        if (tamanho() > t.length){
            throw new EspacoInsuficienteException("O vetor é menor que a lista.");
        }
        
        CelulaSimples<E> auxiliar = first;
        int i = 0;
        Object[] result = t;    // Vetor para guardar o resulado
        
        // Laço de repetição
        while(auxiliar != null){
            result[i] = auxiliar.getValor();
            auxiliar = auxiliar.getProx();
            i++;
        }      
    }
}


/* Lista duplamente encadeada, cada elemento tem um valor qualquer e 
dois ponteiros, um apontando para o próximo elemento da lista, 
e outro para o elemento anterior */

class DoublyLinkedList<E> implements LinkedList<E> {
    
    private CelulaDupla<E> first = null;      // Será o ponteiro que aponta para o primeiro elemento da lista
    private CelulaDupla<E> last = null;       // Será o ponteiro que aponta para o último elemento da lista
    private CelulaDupla<E> aux = null;        // Será um ponteiro auxiliar para armazenar endereços
    private CelulaDupla<E> temp = null;       // Outro ponteiro auxiliar para as funções
    private int count = 0;  
    
    // Funções da Interface
    // Obs: o que cada função faz está descrito na interface
    
    @Override
    public void adicionar(E e){
        CelulaDupla<E> novo = new CelulaDupla<>(e); // Cria uma celula já com o valor atribuído
        
        // Checa se a lista está vazia
        if (first == null){
            
            // Já que a lista está vazia, iremos apontar ambos ponteiros para a mesma célula
            first = novo;
            last = novo;
        
        } else {
            
            // O novo elemento apontará para o antigo último quando inserido
            novo.setAnt(last);
            
            // A última celula da lista irá apontar para a nova celula, deixando de ser a última da lista
            last.setProx(novo);
            
            // E agora, a celula criada será a última celula da lista
            last = novo;
        }
        
        count++;    // Soma ao contador
    }
    
    @Override
    public void adicionar(int position, E e){
        
        int i = 0;                                       // Para contar a posição
        CelulaDupla<E> novo = new CelulaDupla<>(e);  // Ponteiro que para utilizar no laço for
        CelulaDupla<E> auxiliar = first;               // Sempre que usarmos a função, aux apontará para null
        
        // Caso a posição seja 1, será a mesma coisa que adicionar no ínicio da lista
        if(position == 0){
        novo.setProx(first);
        first = novo;
        }else{
            // Percorre as celulas até chegar na celula da posição inserida
            // Caso o valor seja null, chegou no final da celula
            while (auxiliar != null) {
                if(i == position - 1){
                    
                    // E o endereço guardado passará a ser apontado pela célula criada
                    novo.setProx(auxiliar.getProx());
                    
                    // O endereço anterior passará a apontar para a nova célula
                    auxiliar.setProx(novo);
                }

                auxiliar = auxiliar.getProx();
                i++;
            }
        }
                                                       
        // Caso a posição não exista
        if ((position > tamanho()) || (position < 0)){
            throw new PosicaoInvalidaException("Posicao " + position + " com tamanho " + tamanho() + " não é válida." );
        }
        
        count++;   // Soma ao contador
    }
   
    @Override
    public E remover(){
        
        // Checa se a lista está vazia
        if (vazia()){
            throw new NenhumItemException("A lista está vazia; não possui nenhum elemento.");
        }
            
        // Declarar variável para guardar o valor removido
        CelulaDupla<E> valorRemovido  = first;
        
        // Como não haverá nada atrás, será null 
        valorRemovido.setAnt(null);
        
        // Para remover o primeiro elemento, basta apontar o ponteiro de first, para o segundo elemento
        first = first.getProx();
        
        count--;
        
        return valorRemovido.getValor();
    }
    
    @Override
    public E remover(int position){
         
        int i = 0;                                       // Para contar a posição
        CelulaDupla<E> valorRemovido = first;          // Ponteiro que para utilizar no laço for
        CelulaDupla<E> auxiliar = first;               // Sempre que usarmos a função, aux apontará para null 
       
        // Caso a posição não exista
        if ((position + 1 > tamanho()) || (position < 0)){
            throw new PosicaoInvalidaException("Posicao " + position + " com tamanho " + tamanho() + " não é válida." );
        }
        
        // Caso a posição seja 0, será a mesma coisa que remover do ínicio da lista
        if(position == 0){
            first = first.getProx();
        }else{
            // Percorre as celulas até chegar na celula da posição inserida
            // Caso o valor seja null, chegou no final da celula
            while (auxiliar != null) {
                if(i == position - 1){
                    
                    // Iremos guardar o elemento removido
                    valorRemovido = auxiliar.getProx();
                    
                    // Agora este elemento irá apontar para o elemento que o elemento removido apontava
                    auxiliar.setProx(valorRemovido.getProx());
                    
                }
                
                auxiliar = auxiliar.getProx();
                i++;
            }
        }
                                                         
        count--;   // Soma ao contador
        
        return valorRemovido.getValor();
    }
    
    @Override
    public void set(int position, E e){
        
        int i = 0;                                       // Para contar a posição
        boolean existe = false;                          // Verifica se a posição existe
        aux = first;                                     // Sempre que usarmos a função, aux apontará para null
        temp = first;
        
        while (aux != null) {
            if(i == position){
                aux.setValor(e);
                existe = true; 
                }
            aux = aux.getProx();
            i++;
        }
        
        // Caso a posição não exista
        if(existe == false){
            throw new PosicaoInvalidaException("Posicao " + position + " com tamanho " + tamanho() + " não é válida." );
        }
    } 
    
    @Override
    public E get(int position){
        
        int i = 0;                                        // Para contar a posição
        CelulaDupla<E> buscaPosicao = first;            // Ponteiro que para utilizar no laço for
        CelulaDupla<E> valorEncontrado = first;         // Ponteiro que apontará para a célula da posição inserida
        boolean existe = false;                           // Verifica se a posição existe
        
        // Percorre as celulas até chegar na celula da posição inserida
        // Caso o valor seja null, chegou no final da celula
        while (buscaPosicao != null) {
            if (i == position){
                // Retorna o valor
                valorEncontrado = buscaPosicao;
                existe = true;                     // Para verificar se a posição existe
            }
            i++;                                   // Adiciona 1 na posição  
            buscaPosicao = buscaPosicao.getProx(); // Aponta para a próxima celula
        }
        // Caso a posição não exista
        if(existe == false){
            throw new PosicaoInvalidaException("Posicao " + position + " com tamanho " + tamanho() + " não é válida." );
        }
           
        // Retorna o valor
        return valorEncontrado.getValor();
    }
    
    @Override
    public int tamanho() {
        return count;
    }
    
    @Override
    public boolean vazia(){
        
        /* Caso o ponteiro que aponta para o primeiro elemento não esteja apontando para nada
        significa que o primeiro elemento não existe, logo, a lista está vazia; */
        return (first == null);
    }
    
    @Override
    public void limpar() {
        first = null;
        last = null;
    }
    
    @Override
    public Object[] toArray() {
        
        Object[] array =  new Object[tamanho()]; // Criando um vetor com a mesma quantidade de elementos que a lista
        int i = 0;                               // Contador
        aux = first;
        
        while(aux != null){
            array[i] = aux.getValor();
            aux = aux.getProx();
            i++;
        }
        return array;
    }
    
    @Override
    public <T> void toArray(T[] t) {
        
        // Nessa função temos que passar os elementos da lista para o vetor
        
        // Caso o vetor seja menor que a lista
        if (tamanho() > t.length){
            throw new EspacoInsuficienteException("O vetor é menor que a lista.");
        }
        
        aux = first;
        int i = 0;
        Object[] result = t;    // Vetor para guardar o resulado
        
        // Laço de repetição
        while(aux != null){
            result[i] = aux.getValor();
            aux = aux.getProx();
            i++;
        }    
    }
}

class Main {
    
    public static void print(LinkedList list) {

        if (list.vazia())
            System.out.println("Lista vazia.");
        
        Object array[] = list.toArray();
        
        for(Object i: array)
            System.out.println(i);
    }
    
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        String token;
        int v, p;
        
        token = scan.next();
        LinkedList<Integer> list;        
        if (token.equals("SL"))
            list = new SinglyLinkedList<>();
        else
            list = new DoublyLinkedList<>();
        

        try {
            token = scan.next();
            while (!token.equals("Q")) {
                switch (token) {
                    case "AF": // adicionar no final
                        v = scan.nextInt();
                        list.adicionar(v);
                        break;
                    case "AP": // adicionar numa posição
                        p = scan.nextInt();
                        v = scan.nextInt();
                        list.adicionar(p, v);
                        break;
                    case "RI": // remover no início
                        list.remover();
                        break;
                    case "RP": // remover numa posição
                        p = scan.nextInt();
                        list.remover(p);
                        break;
                    case "S": // set
                        p = scan.nextInt();
                        v = scan.nextInt();
                        list.set(p, v);
                        break;
                    case "G": // get
                        p = scan.nextInt();
                        System.out.println(list.get(p));
                        break;
                    case "T": // tamanho
                        System.out.println(list.tamanho());
                        break;
                    case "V": // vazia
                        System.out.println(list.vazia());
                        break;
                    case "TO": // array de object
                        Object res[] = list.toArray();
                        for (Object o: res)
                            System.out.println(o);
                        break;
                    case "TA": // array do tipo de dado
                        v = scan.nextInt();
                        Integer ri[] = new Integer[v];
                        list.toArray(ri);
                        for (Integer i: ri)
                            System.out.println(i);
                        break;
                    case "P":   // imprimir
                        Main.print(list);
                        break;
                    default:    // opção desconhecida
                        System.out.println("ERRO");
                        break;
                }

                token = scan.next();
            }
        }
        catch (PosicaoInvalidaException pie) {
            System.out.println("PosicaoInvalidaException");
        }
        catch (EspacoInsuficienteException eie) {
            System.out.println("EspacoInsuficienteException");
        }
        catch (NenhumItemException nie) {
            System.out.println("NenhumItemException");
        }
    }
}