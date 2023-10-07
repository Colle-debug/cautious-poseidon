String webpageCode = R"***(
<!DOCTYPE html>
<html>
  <head>
    <meta charset="UTF-8">
    <title>HydroMonitor</title>
    <style>
      body {
        margin: 0;
        padding: 0;
        font-family: 'Segoe UI', sans-serif;
        background-color: #f5f5f5;
      }

      .container {
        max-width: 800px;
        margin: 0 auto;
        padding: 20px;
        box-sizing: border-box;
      }

      .card {
        background-color: #fff;
        border-radius: 10px;
        padding: 20px;
        box-shadow: 0 5px 15px rgba(0, 0, 0, 0.1);
        text-align: center;
      }

      h1 {
        margin-top: 0;
        color: #333;
      }

      h2 {
        font-size: 24px;
        margin-top: 10px;
        color: #333;
      }

      #POTvalue {
        font-size: 36px;
        color: #f39c12;
      }
      
      .logo {
        display: inline-block;
        vertical-align: middle;
        width: 50px;
        height: 50px;
        margin-right: 10px;
      }

      .info-box {
        background-color: #f2f2f2;
        border-radius: 5px;
        padding: 10px;
        margin-top: 20px;
        text-align: left;
      }

      .linkedin-buttons {
        margin-top: 20px;
        text-align: center;
      }

      .linkedin-button {
        background-color: #0077B5;
        border: none;
        color: white;
        padding: 10px 20px;
        font-size: 16px;
        border-radius: 5px;
        cursor: pointer;
        margin-right: 10px;
      }

      .tds-image {
        max-width: 100%;
        height: auto;
      }
    </style>
  </head>
  <body>
    <div class="container">
      <div class="card">
        <h1>
          <img src="https://easydrawingguides.com/wp-content/uploads/2021/04/Water-Drops-Step-10.png" alt="HydroMonitor Logo" class="logo">HydroMonitor Dashboard
        </h1>
        <h2>Solidi disciolti totali: <span id="POTvalue">0</span> ppm </h2>
      </div>
      <div class="info-box">
        <p>
          <strong>Total Dissolved Solids (TDS)</strong> è un parametro che si riferisce alla quantità totale di sostanze solubili presenti in un campione d'acqua. Queste sostanze includono minerali, sali, ioni metallici e altre molecole disciolte che sono presenti nell'acqua. Il TDS è un indicatore importante della qualità dell'acqua, poiché può influenzare sia la sua sicurezza per il consumo umano che la sua idoneità per scopi industriali, agricoli e ambientali.
        </p>
        <img src="https://onsitego.com/blog/wp-content/uploads/2021/01/TDS-Levels-PPM.png" alt="TDS Levels Image" class="tds-image">
        <p>La misurazione dei TDS avviene comunemente in parti per milione (ppm), che rappresentano la quantità di sostanze disciolte presenti in un milione di parti d'acqua. Questa unità di misura indica la concentrazione delle sostanze disciolte e può variare notevolmente in base alla fonte dell'acqua e alle attività umane associate.</p>
        <h2>Fonti di TDS</h2>
        <ol>
          <li>
            <strong>Minerali Naturali:</strong> L'acqua che scorre attraverso il terreno può entrare in contatto con rocce e sedimenti che contengono minerali come calcio, magnesio, potassio e sodio. Questi minerali possono sciogliersi nell'acqua, contribuendo al TDS.
          </li>
          <br>
          <li>
            <strong>Sali Inorganici:</strong> L'acqua può entrare in contatto con sali inorganici presenti nel suolo, come il cloruro di sodio (comunemente noto come sale da tavola) o altri sali solubili. Questi sali si disciolgono nell'acqua e aumentano il TDS.
          </li>
          <br>
          <li>
            <strong>Inquinanti Antropogenici:</strong> Le attività umane come l'agricoltura, l'industria e lo smaltimento dei rifiuti possono introdurre sostanze chimiche dannose nell'acqua, come metalli pesanti, solventi e composti organici. Questi inquinanti possono aumentare il TDS e avere effetti negativi sulla qualità dell'acqua.
          </li>
          <br>
          <li>
            <strong>Processi Naturali ed Erosione:</strong> I processi naturali come l'erosione del suolo e il decadimento della materia organica possono contribuire alla presenza di sostanze disciolte nell'acqua.
          </li>
          <br>
        </ol>
        <p>Valori elevati di TDS possono indicare la presenza di contaminanti che potrebbero rendere l'acqua non adatta al consumo umano o ad altri usi. Tuttavia, è importante notare che non tutti i TDS sono dannosi; l'acqua potabile contiene naturalmente una certa quantità di minerali che possono contribuire al suo sapore e alla sua qualità.</p>
      </div>
    </div>

  <script>
    setInterval(function() {
      getPOTval();
      }, 1000);
      //-------------------------------------------------------
      function getPOTval() {
        var POTvalRequest = new XMLHttpRequest(); // Costruttore dell'oggetto XMLHttpRequest
        POTvalRequest.onreadystatechange = function() { // Evento che parte ogni qual volta readyState si modifica
          if (this.readyState == 4 && this.status == 200) { //  Status: restituisce il codice dello stato della richiesta HTTP 200 = OK, readyState: stato della richiesta AJAX 4 = DONE
            document.getElementById("POTvalue").innerHTML = this.responseText; // .innerHTML consente di accedere e modificare il contenuto HTML (compresi testo e tags) all'interno dell'elemento;  responseText rappresenta il testo di risposta ricevuto dal Server
          }
        };
        POTvalRequest.open("GET", "readPOT", true); // Richiesta GET all'URL readPOT, true=asincrona -->ogni volta che si effettua una richiesta HTTP a readPOT si attiva handlePOT. true --> interagire con la pagina senza attendere la risposta
        POTvalRequest.send(); // GET del responseText
      }
      //-------------------------------------------------------
  function showProjectInfo() {
    var projectInfo = "Progetto di Reti di Telecomunicazioni e Sicurezza\n" +
                   "Prof. Ciro D'Elia\n" +
                   "Anno accademico 2022-2023";
  alert(projectInfo);
  }      
    </script>
  </body>
  <foot>
    <div class="linkedin-buttons">
    <a class="linkedin-button" href="https://www.linkedin.com/in/vincenzo-c-b9a1b6204" target="_blank">Vincenzo Colle</a>
    <a class="linkedin-button" href="https://www.linkedin.com/in/riccardodaguanno/" target="_blank">Riccardo D'Aguanno</a>
    <a class="linkedin-button" href="https://www.linkedin.com/in/domenico-papa-690860186/" target="_blank">Domenico Papa</a>
    <br>
    <br>
    <button class="linkedin-button" onclick="showProjectInfo()">Informazioni</button>
</div>

  </foot>
</html>
)***";
