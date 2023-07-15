/**
# COPYRIGHT LICENSE: 
# This information contains sample code provided in source code form. You may 
# copy, modify, and distribute these sample programs in any form without 
# payment to IBM for the purposes of developing, using, marketing or 
# distributing application programs conforming to the application programming
# interface for the operating platform for which the sample code is written. 
# Notwithstanding anything to the contrary, IBM PROVIDES THE SAMPLE SOURCE CODE
# ON AN "AS IS" BASIS AND IBM DISCLAIMS ALL WARRANTIES, EXPRESS OR IMPLIED, 
# INCLUDING, BUT NOT LIMITED TO, ANY IMPLIED WARRANTIES OR CONDITIONS OF 
# MERCHANTABILITY, SATISFACTORY QUALITY, FITNESS FOR A PARTICULAR PURPOSE, 
# TITLE, AND ANY WARRANTY OR CONDITION OF NON-INFRINGEMENT. IBM SHALL NOT BE 
# LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL OR CONSEQUENTIAL DAMAGES
# ARISING OUT OF THE USE OR OPERATION OF THE SAMPLE SOURCE CODE. IBM HAS NO 
# OBLIGATION TO PROVIDE MAINTENANCE, SUPPORT, UPDATES, ENHANCEMENTS OR 
# MODIFICATIONS TO THE SAMPLE SOURCE CODE.
**/
package com.ibm.was.wssample.sei.ping;

import java.net.MalformedURLException;
import java.net.URL;
import javax.xml.namespace.QName;
import javax.xml.ws.Service;
import javax.xml.ws.WebEndpoint;
import javax.xml.ws.WebServiceClient;


/**
 * This class was generated by the JAXWS SI.
 * JAX-WS RI 2.0_01-b15-fcs
 * Generated source version: 2.0
 * 
 */
@WebServiceClient(name = "PingService12", targetNamespace = "http://com/ibm/was/wssample/sei/ping/", wsdlLocation = "WEB-INF/wsdl/Ping12.wsdl")
public class PingService12
    extends Service
{

    private final static URL PINGSERVICE12_WSDL_LOCATION;

    static {
        URL url = null;
        try {
            url = new URL("file:/WEB-INF/wsdl/Ping12.wsdl");
        } catch (MalformedURLException e) {
            e.printStackTrace();
        }
        PINGSERVICE12_WSDL_LOCATION = url;
    }

    public PingService12(URL wsdlLocation, QName serviceName) {
        super(wsdlLocation, serviceName);
    }

    public PingService12() {
        super(PINGSERVICE12_WSDL_LOCATION, new QName("http://com/ibm/was/wssample/sei/ping/", "PingService12"));
    }

    /**
     * 
     * @return
     *     returns PingService12PortType
     */
    @WebEndpoint(name = "PingService12Port")
    public PingService12PortTypeClient getPingService12Port() {
        return (PingService12PortTypeClient)super.getPort(new QName("http://com/ibm/was/wssample/sei/ping/", "PingService12Port"), PingService12PortTypeClient.class);
    }

}