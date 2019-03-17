    #include <stdio.h>
    #include <stdlib.h>
    #include <curl/curl.h>
    
    int main(int argc, char *argv[])
    {
      CURL *curl;
      CURLcode res;
      char url[]= "http://142.93.36.96:3000/api/ping";
      curl = curl_easy_init();
      if(curl) {
        curl_easy_setopt(curl, CURLOPT_URL, url);
        res = curl_easy_perform(curl);
        curl_easy_cleanup(curl);
      }
      return 0;
    }


