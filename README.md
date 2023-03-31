# BUS_TRACK-SOLUTION_CHALLENGE

<h2>Description</h2>
<p>Our project objective is to track the college buses.Which is very useful to college students to catch the buses on time,even though if they missed their buses they can track neay by buses and get there.Advantange of our project is,we are tracking the buses on live with out any delay and the results are accurate.</p>
<h5>Files</h5>
<ul>
 <li>BUS(SOLUTION-CHALLENGE).zip->project file<br></li>
 <li>bus1.ino,bus2.ino->programs for esp32<br></li>
 </ul>
 
<h3>Modules</h3>
<ol>
  <li>Track buses</li>
  <li>Alerting Regular Bus</li>
 </ol>
 
 
<h3>Technologies used</h3>
 <ul>
  <li>Android studio</li>
  <li>Google Maps</li>
  <li>Fire Store</li>
  <li>Paho MQTT Client (Java)</li>
  <li>HiveMQTT public server </li>
  </ul>
  
<h2>Hardware</h2>
<pre><b>NOTE : </b>Here "Hardware" refers to esp32+GPS</pre>

![What-is-MQTT](https://user-images.githubusercontent.com/55002003/229025948-6250fcb4-46b0-4baf-9b13-85b895fc7d12.jpg)


Image credits:https://www.pcwdld.com/
<p>We have used MQTT to get data from the Hardware,in the esp32 we configure MQTT Client by connecting to HiveMQtt Server and publish the data received from GPS to the corresponding topic(TOPICS are UniqueName example:id/bus1,each bus have unique topic)so that the users connected to the same HiveMqtt server can receive the data if the subsribed to the respective topic.<p> 
<pre><b>NOTE : </b>As of now we are not having esp32 microcontroller we have used WOKWI(online simultor) and the <b>lat,lon data generated from esp32 simulator is manually incremented</b>
The code can me modified to data from gps and published to server
</pre>  

<h2>Software</h2>
<pre><b>NOTE : </b>TOPICS=>id/bus(n)</pre>
<p>In our application we have used Paho Mqtt client to connect with server and receive data.the respective id and bus(number) is stored in firestore and dynamically viewd using listview.<p>
  
<pre>As of now we are completed upto module 1 and currently working with module 2,we are palnned using<b> Distance matrix API </b>of google for calculating distance between user's current location and bus's location</pre>



<h2>Screenshots</h2>

![LOGIN](https://user-images.githubusercontent.com/55002003/229028715-86b6aceb-d988-40eb-aeb9-b388717de2b2.jpg)<br>


![LIST_VIEW](https://user-images.githubusercontent.com/55002003/229028760-6f6b3c16-587a-40d6-8360-bde5ae520f3d.jpg)<br>


![MAP](https://user-images.githubusercontent.com/55002003/229028775-0d9b8725-0a8a-463e-913d-e162b094db64.jpg)<br>


