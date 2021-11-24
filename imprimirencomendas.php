<!-- este php abre da app -->


<link href="//maxcdn.bootstrapcdn.com/bootstrap/4.1.1/css/bootstrap.min.css" rel="stylesheet" id="bootstrap-css">
<script src="//maxcdn.bootstrapcdn.com/bootstrap/4.1.1/js/bootstrap.min.js"></script>
<script src="//cdnjs.cloudflare.com/ajax/libs/jquery/3.2.1/jquery.min.js"></script>

<!DOCTYPE html>

<html lang="en">

<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
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
    <title>CakeMood</title>
</head>
<body>
    <?php
        $ligacao = mysqli_connect ('localhost', 'root','root21');

        if(!$ligacao)
            die("Erro ao abrir a base de dados");
        $sql ="SELECT * FROM bd_cakemood.encomenda";

        mysqli_select_db($ligacao,'bd_cakemood');
        $res=mysqli_query($ligacao,$sql);

        if(!$res)
            die("erro ao aceder à tabela");
        $count = mysqli_num_rows($res);
    ?>

<table class="table table-hover">
  <thead>
    <tr>
      <th scope="col">#</th>
      <th scope="col">Nome Cliente</th>
      <th scope="col">Email Cliente</th>
      <th scope="col">Data encomenda</th>
      <th scope="col">Data entrega</th>
      <th scope="col">Bolo</th>
      <th scope="col">Massa Bolo</th>
      <th scope="col">Telefone</th>
      <th scope="col">Telefone</th>
      <th scope="col">Telefone</th>
      <th scope="col">Telefone</th>
      <th scope="col">Telefone</th>
      <th scope="col">Telefone</th>
      <th scope="col">Telefone</th>
      <th scope="col">Telefone</th>
      <th scope="col">Telefone</th>


    </tr>
  </thead>
  <tbody>
    <tr>
      <th scope="row">1</th>
      <td>Mark</td>
      <td>Otto</td>
      <td>@mdo</td>
    </tr>
    <tr>
      <th scope="row">2</th>
      <td>Jacob</td>
      <td>Thornton</td>
      <td>@fat</td>
    </tr>
    <tr>
      <th scope="row">3</th>
      <td colspan="2">Larry the Bird</td>
      <td>@twitter</td>
    </tr>
  </tbody>
</table>
    
</body>
</html>