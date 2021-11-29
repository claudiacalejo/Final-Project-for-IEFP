-- MySQL dump 10.13  Distrib 8.0.27, for Win64 (x86_64)
--
-- Host: 127.0.0.1    Database: bd_cakemood
-- ------------------------------------------------------
-- Server version	8.0.27

/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!50503 SET NAMES utf8 */;
/*!40103 SET @OLD_TIME_ZONE=@@TIME_ZONE */;
/*!40103 SET TIME_ZONE='+00:00' */;
/*!40014 SET @OLD_UNIQUE_CHECKS=@@UNIQUE_CHECKS, UNIQUE_CHECKS=0 */;
/*!40014 SET @OLD_FOREIGN_KEY_CHECKS=@@FOREIGN_KEY_CHECKS, FOREIGN_KEY_CHECKS=0 */;
/*!40101 SET @OLD_SQL_MODE=@@SQL_MODE, SQL_MODE='NO_AUTO_VALUE_ON_ZERO' */;
/*!40111 SET @OLD_SQL_NOTES=@@SQL_NOTES, SQL_NOTES=0 */;

--
-- Table structure for table `encomenda`
--

DROP TABLE IF EXISTS `encomenda`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `encomenda` (
  `id_encomenda` int NOT NULL AUTO_INCREMENT,
  `nome_cliente` varchar(45) DEFAULT NULL,
  `email_cliente` varchar(45) DEFAULT NULL,
  `telefone` varchar(45) DEFAULT NULL,
  `data_encomenda` timestamp NULL DEFAULT CURRENT_TIMESTAMP,
  `data_entrega` date DEFAULT NULL,
  `bolo` varchar(45) DEFAULT NULL,
  `massa_bolo` varchar(45) DEFAULT NULL,
  `cobertura_recheio` varchar(45) DEFAULT NULL,
  `extras` varchar(45) DEFAULT NULL,
  `sabor_merengue` varchar(45) DEFAULT NULL,
  `recheio_suspiro` varchar(45) DEFAULT NULL,
  `pavlova_ou_crepes` varchar(45) DEFAULT NULL,
  `cheesecake` varchar(45) DEFAULT NULL,
  `tamanho` varchar(45) DEFAULT NULL,
  `comentarios` varchar(400) DEFAULT NULL,
  PRIMARY KEY (`id_encomenda`)
) ENGINE=InnoDB AUTO_INCREMENT=28 DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_0900_ai_ci;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `encomenda`
--

LOCK TABLES `encomenda` WRITE;
/*!40000 ALTER TABLE `encomenda` DISABLE KEYS */;
INSERT INTO `encomenda` VALUES (1,'Claudia Calejo da Costa Pereira','claudia_calejo@hotmail.com','+351913996235','2021-11-18 15:07:13','2021-11-30','Semi Naked Cake','Red Velvet','Ganache Chocolate','Brigadeiros','','','','',NULL,NULL),(2,NULL,NULL,NULL,'2021-11-18 15:07:15',NULL,NULL,'','','','','','','',NULL,NULL),(3,'Claudia Calejo da Costa Pereira','claudia_calejo@hotmail.com','+351913996235','2021-11-18 15:07:39','2021-12-08','Number Cake','Red Velvet','Chantilly','Nenhum','','','','',NULL,NULL),(4,NULL,NULL,NULL,'2021-11-18 15:10:12',NULL,NULL,'','','','','','','',NULL,NULL),(5,NULL,NULL,NULL,'2021-11-18 17:55:40',NULL,NULL,'','','','','','','',NULL,NULL),(6,'Claudia Calejo da Costa Pereira','claudia_calejo@hotmail.com','+351913996235','2021-11-18 17:58:22','2021-11-23','Cheesecake','Red Velvet','Ganache Chocolate','','','','','Cheesecake Japonês',NULL,NULL),(7,'Cláudia Pereira','claudia_calejo@hotmail.com','913996235','2021-11-18 22:37:59','2021-11-23','Cloud Cake','','','','','','','',NULL,NULL),(8,'Claudia Calejo da Costa Pereira','claudia_calejo@hotmail.com','+351913996235','2021-11-19 09:52:51','2021-12-09','Pavlova','','','','','','Frutos Vermelhos','',NULL,'Quero tudo junto'),(9,'Claudia Calejo da Costa Pereira','claudia_calejo@hotmail.com','+351913996235','2021-11-19 10:18:16','2021-11-30','Number Cake','Cenoura','Brigadeiro','Brigadeiros','','','','',NULL,''),(10,'testeteste','claudia_calejo@hotmail.com','+351913996235','2021-11-19 10:27:35','2021-12-10','Number Cake','Chocolate','Ganache Chocolate','Brigadeiros','','','','','Tamanho M','eu quero muito chocolate'),(11,'Claudia Calejo da Costa Pereira','claudia_calejo@hotmail.com','+351913996235','2021-11-19 10:29:11','2021-12-11','Bolo Suspiro','','','','Chocolate','Maracujá','','','Tamanho XL',''),(12,'Claudia Calejo da Costa Pereira','claudia_calejo@hotmail.com','+351913996235','2021-11-19 11:19:00','2021-11-23','Pavlova','','','','','','Frutos Vermelhos','','Tamanho S',''),(13,'Maracuja','maracuja@maracuja',NULL,'2021-11-22 12:31:29',NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL),(14,'fsdf','fdsfsd','dsfsdf','2021-11-22 13:14:54','2021-11-30',NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL),(15,'rewr','rewqr','qwerq','2021-11-22 15:22:14','2021-11-25','wrewq','ewqrewqrewq','rewrq','erwqr','wrqwr','rqwrqw','rewrwqer','ewqrewqrew','rewqrewq',NULL),(16,'rewrwqe','ewqrewr','rweqr','2021-11-22 15:23:22','2021-12-21','rewrew','rwqrw','rqrq','ewrewr','','','','','',NULL),(17,'Jaoaa','joasd@fdsf','+351913996235','2021-11-23 10:44:08','2021-12-02','Pavlova','','','','','','Nutella','','',''),(18,'Jaoaa','joasd@fdsf','+351913996235','2021-11-23 10:45:33','2021-12-02','Bolo de Crepes','','','','','','Nutella','','',''),(19,'gdfgfdgfdg','gfdgfdgdfg@gfdgfdg','fgfdgdfgfd','2021-11-23 10:47:49','2021-11-30','Bolo de Crepes','','','','','','After-eight','','',''),(20,'asdsadsad','dsadsadsadasda','sadasdsdasdsadasd','2021-11-23 11:03:32','2021-12-12','crepe','','','','','','rgtrter','','',NULL),(21,'Claudia Calejo da Costa Pereira','claudia_calejo@hotmail.com','+351913996235','2021-11-24 15:04:33','2021-12-09','Naked Cake','Chocolate','Buttercream','Nenhum','','','','','Tamanho L',''),(22,'Claudia Calejo da Costa Pereira','claudia_calejo@hotmail.com','+351913996235','2021-11-25 11:34:00','2021-12-11','Decorado','Laranja','Chantilly','Nenhum','','','','','Tamanho L',''),(23,NULL,NULL,NULL,'2021-11-25 11:34:50',NULL,NULL,'','','','','','','','',''),(24,'Ana Cristina','ana@ana','48594165469','2021-11-26 17:45:09','2021-12-09','Cloud Cake','','','','','','','','','Qyyeri oiyxi dsixwe'),(25,'Claudia Calejo da Costa Pereira','claudia_calejo@hotmail.com','+351913996235','2021-11-29 08:51:19','2021-12-30','Decorado','Laranja','Chantilly','Chocolates Variados','','','','','Tamanho S',''),(26,NULL,NULL,NULL,'2021-11-29 08:52:05',NULL,NULL,'','','','','','','','',''),(27,'Ola Maria','casdas@edsfdsf','915454555','2021-11-29 08:56:42','2021-05-12','Naked','sdas','fdsf','sdfdsf','','','','','S',NULL);
/*!40000 ALTER TABLE `encomenda` ENABLE KEYS */;
UNLOCK TABLES;
/*!40103 SET TIME_ZONE=@OLD_TIME_ZONE */;

/*!40101 SET SQL_MODE=@OLD_SQL_MODE */;
/*!40014 SET FOREIGN_KEY_CHECKS=@OLD_FOREIGN_KEY_CHECKS */;
/*!40014 SET UNIQUE_CHECKS=@OLD_UNIQUE_CHECKS */;
/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
/*!40111 SET SQL_NOTES=@OLD_SQL_NOTES */;

-- Dump completed on 2021-11-29  9:02:16
