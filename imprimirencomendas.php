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
    <script src="https://cdnjs.cloudflare.com/ajax/libs/jquery/3.3.1/jquery.min.js"></script>
    <link href="https://stackpath.bootstrapcdn.com/bootstrap/4.5.0/css/bootstrap.min.css" rel="stylesheet" />

    <link rel="stylesheet" href="style.css">

    <link rel="icon" type="image/x-icon" href="images/favicon-16x16.png">

<style>
  #myInput {
    width: 30%;
    font-size: 16px; 
    padding: 12px 20px 12px 40px;
    border: 1px solid #ddd;
    margin:0px 20px 12px 20px;
    align-items: center;
  }

  #dtencomendas {
    border-collapse: collapse;
    width: 100%;
    border: 1px solid #ddd; 
    font-size: 18px;
  }

  #dtencomendas tr.header, #dtencomendas tr:hover, #dtencomendas th.header, #dtencomendas th:hover {
    background-color: #857599;
    color: white;
  }
</style>

<script>
  function myFunction() {
    // Declare variables
    var input, filter, table, tr, td, i, txtValue;
    input = document.getElementById("myInput");
    filter = input.value.toUpperCase();
    table = document.getElementById("dtencomendas");
    tr = table.getElementsByTagName("tr");

    //Loop para os nomes
    for (i = 0; i < tr.length; i++) {
      td = tr[i].getElementsByTagName("td")[1];
      if (td) {
        txtValue = td.textContent || td.innerText;
        if (txtValue.toUpperCase().indexOf(filter) > -1) {
          tr[i].style.display = "";
        } else {
          tr[i].style.display = "none";
        }
      }
    }
  }
</script>

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

<h3 class="text-center" style="padding: 15px">Lista Encomendas</h3>

  <div class="input-group">
    <input type="text" class="form-control" id="myInput" onkeyup="myFunction()" placeholder="Pesquisa por nome do cliente" >
  </div>


<table id="dtencomendas" class="table table-hover table-striped table-bordered table-sm " style="font-size: 12px;">
  <thead>
    <tr>
      <th scope="col">#</th>
      <th scope="col">Nome Cliente</th>
      <th scope="col">Email Cliente</th>
      <th scope="col">Telefone</th>
      <th scope="col">Data encomenda</th>
      <th scope="col">Data entrega</th>
      <th scope="col">Bolo</th>
      <th scope="col">Massa Bolo</th>
      <th scope="col">Cobertura/Recheio</th>
      <th scope="col">Extras</th>
      <th scope="col">Sabor do Merengue</th>
      <th scope="col">Recheio Supiro</th>
      <th scope="col">Recheio Pavlova/Crepes</th>
      <th scope="col">Cheesecake</th>
      <th scope="col">Tamanho</th>
      <th scope="col">Comentários</th>
    </tr>
  </thead>
  <tbody>
    <tr>
      <?php
        for($i=1; $i<=$count;$i++){
            $linha=mysqli_fetch_array($res);
            echo '<tr><td>'.$linha['id_encomenda'].'</td>';
            echo '<td>'.$linha['nome_cliente'].'</td>';
            echo '<td>'.$linha['email_cliente'].'</td>';
            echo '<td>'.$linha['telefone'].'</td>';
            echo '<td>'.$linha['data_encomenda'].'</td>';
            echo '<td>'.$linha['data_entrega'].'</td>';
            echo '<td>'.$linha['bolo'].'</td>';
            echo '<td>'.$linha['massa_bolo'].'</td>';
            echo '<td>'.$linha['cobertura_recheio'].'</td>';
            echo '<td>'.$linha['extras'].'</td>';
            echo '<td>'.$linha['sabor_merengue'].'</td>';
            echo '<td>'.$linha['recheio_suspiro'].'</td>';
            echo '<td>'.$linha['pavlova_ou_crepes'].'</td>';
            echo '<td>'.$linha['cheesecake'].'</td>';
            echo '<td>'.$linha['tamanho'].'</td>';
            echo '<td>'.$linha['comentarios'].'</td>';
        }
        ?>
    </tr>
   
  </tbody>
</table>


    
</body>
</html>