<link href="//maxcdn.bootstrapcdn.com/bootstrap/4.1.1/css/bootstrap.min.css" rel="stylesheet" id="bootstrap-css">
<script src="//maxcdn.bootstrapcdn.com/bootstrap/4.1.1/js/bootstrap.min.js"></script>
<script src="//cdnjs.cloudflare.com/ajax/libs/jquery/3.2.1/jquery.min.js"></script>

<!------ Include the above in your HEAD tag ---------->

<html lang="en">
<head>
  <title>Cake Mood</title>
  <meta charset="utf-8">
  <meta name="viewport" content="width=device-width, initial-scale=1">
  <link rel="stylesheet" href="https://maxcdn.bootstrapcdn.com/bootstrap/4.1.3/css/bootstrap.min.css">
  <link rel="stylesheet" href="https://cdnjs.cloudflare.com/ajax/libs/font-awesome/4.7.0/css/font-awesome.min.css">
  <link href="https://fonts.googleapis.com/css?family=Raleway:400,500,500i,700,800i" rel="stylesheet">
  <link href="//maxcdn.bootstrapcdn.com/bootstrap/4.1.1/css/bootstrap.min.css" rel="stylesheet" id="bootstrap-css">
  <script src="//maxcdn.bootstrapcdn.com/bootstrap/4.1.1/js/bootstrap.min.js"></script>
  <script src="//cdnjs.cloudflare.com/ajax/libs/jquery/3.2.1/jquery.min.js"></script>
  <link rel="stylesheet" href="script.js">
  <script src="https://cdnjs.cloudflare.com/ajax/libs/jquery/3.3.1/jquery.min.js"></script>
  <link href="https://stackpath.bootstrapcdn.com/bootstrap/4.5.0/css/bootstrap.min.css" rel="stylesheet" />


  <link rel="stylesheet" href="style.css">
</head>
<body>

    <!--==========================================-->
    <!--                NAV BAR                   -->
    <!--==========================================-->
    <div class="colorheader sticky-top">
      <nav class="navbar navbar-expand-sm navbar-dark">
          <button class="navbar-toggler" type="button" data-toggle="collapse" data-target="#navbarTogglerDemo03" aria-controls="navbarTogglerDemo03" aria-expanded="false" aria-label="Toggle navigation">
            <span class="navbar-toggler-icon"></span>
          </button>
          <div class="collapse navbar-collapse" id="navbarTogglerDemo03">
            <ul class="navbar-nav mr-auto mt-2 mt-lg-0">
              <li class="nav-item">
                <a class="nav-link" href="index.html">Cake Mood <span class="sr-only">(current)</span></a>
              </li>
              <li class="nav-item">
                <a class="nav-link" href="index.html#portfolio">Portfolio</a>
              </li>
              <li class="nav-item">
                <a class="nav-link" href="index.html#sabores">Sabores</a>
              </li>
              <li class="nav-item">
                <a class="nav-link" href="index.html#preco">Preço</a>
              </li>
              <li class="nav-item">
                <a class="nav-link" href="index.html#encomendas">Encomendas</a>
              </li>
              <li class="nav-item">
                <a class="nav-link" href="#">Call</a>
              </ul>
            <div class="social-part">
              <i class="fa fa-facebook" aria-hidden="true"></i>
              <i class="fa fa-twitter" aria-hidden="true"></i>
              <i class="fa fa-instagram" aria-hidden="true"></i>
            </div>
          </div>
        </nav>
    </div>
    
<?php
    $nome_cliente = $email_cliente = $telefone = $data_entrega =$bolo = $massa_bolo = $cobertura_recheio = $extras = $cheesecake = $pavlova = $sabormerengue = $saborsuspiro  = $numeropessoas = $comentarios = $crepes =  "";


    $nome_cliente = $_POST["nome_cliente"];
    $email_cliente = $_POST["email_cliente"];
    $telefone = $_POST["telefone"];
    $data_entrega = $_POST["data_entrega"];
    $bolo = $_POST["bolo"];

    $massa_bolo = isset($_POST["massa_bolo"]);
    if ($massa_bolo == NULL ){
      $massa_bolo = "";
    }else{
      $massa_bolo = $_POST["massa_bolo"];
    }

    $cobertura_recheio = isset($_POST["cobertura_recheio"]);
    if ($cobertura_recheio == NULL ){
      $cobertura_recheio = "";
    }else{
      $cobertura_recheio = $_POST["cobertura_recheio"];
    }

    $extras = isset($_POST["extras"]);
    if ($extras == NULL ){
      $extras = "";
    }else{
      $extras = $_POST["extras"];
    }

    $cheesecake = isset($_POST["cheesecakee"]);
    if ($cheesecake == NULL ){
      $cheesecake = "";    
    }else{
      $cheesecake = $_POST["cheesecakee"];
    }

    $pavlova = isset($_POST["recheio_pavlova"]);
    if ($pavlova == NULL ){
      $pavlova = "";    
    }else{
      $pavlova = $_POST["recheio_pavlova"];
    }

    $sabormerengue = isset($_POST["sabormerengue"]);
    if ($sabormerengue == NULL ){
      $sabormerengue = "";    
    }else{
      $sabormerengue = $_POST["sabormerengue"];
    }

    $saborsuspiro = isset($_POST["recheiosuspiro"]);
    if ($saborsuspiro  == NULL ){
      $saborsuspiro = "";    
    }else{
      $saborsuspiro = $_POST["recheiosuspiro"];
    }

    $comentarios = isset($_POST["comentarios"]);
    if ($comentarios  == NULL ){
      $comentarios = "";    
    }else{
      $comentarios = $_POST["comentarios"];
    }

    $numeropessoas = isset($_POST["numeropessoas"]);
    if ($numeropessoas  == NULL ){
      $numeropessoas = "";    
    }else{
      $numeropessoas = $_POST["numeropessoas"];
    }

    // Database connection
    $conn = new mysqli('localhost', 'root', 'root21', 'bd_cakemood');

    if ($conn -> connect_error){
        die('Connection Failed : '.$conn->connect_error);
    }else{
        $stmt = $conn->prepare("INSERT into encomenda (nome_cliente, email_cliente, telefone, data_entrega, bolo, massa_bolo, cobertura_recheio, extras, sabor_merengue, recheio_suspiro, pavlova_ou_crepes, cheesecake, tamanho, comentarios) values (?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?,  ?, ?)");
        $stmt-> bind_param("ssssssssssssss", $nome_cliente, $email_cliente, $telefone, $data_entrega, $bolo, $massa_bolo, $cobertura_recheio, $extras, $sabormerengue, $saborsuspiro, $pavlova, $cheesecake, $numeropessoas, $comentarios);
        $stmt -> execute();
        echo " ";
        
        $stmt -> close();
        $conn ->close();
    }
?>

<div class="container">
   <img src="sucesso.jpg" alt="encomenda registada com sucesso" class="rounded mx-auto d-block">
   <br>
   <h2 class='text-center'>O seu pedido foi registado com sucesso!</h2>
   <br>
   <h6 class='text-center'>Obrigada por nos deixar tornar os seus dias mais doces.</h6>
   <p class='text-center'>Entraremos em contacto consigo para confirmar o seu pedido, combinar a entrega e enviar as instruções de pagamento.</p>
   <p class='text-center'>Para pedidos até às 17h, irá ser contactado no próprio dia, para pedidos posteriores será contactado do próximo dia.</p>

</div>


    <!--==========================================-->
    <!--                 FOOTER                   -->
    <!--==========================================-->
    <footer class="text-center text-white" style="background-color: #f1f1f1; position:absolute; bottom:0%; width: 100%;">
      <div class="text-center text-light p-2" style="background-color:#857599;">
        © 2021 Copyright
        <a class="text-light"> Cake Mood </a>
      </div>
    </footer>


</body>
</html>