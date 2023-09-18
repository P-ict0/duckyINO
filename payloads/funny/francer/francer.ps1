Invoke-WebRequest -Uri "https://github.com/P-ict0/duckyINO/blob/main/payloads/funny/francer/france.png?raw=true" -OutFile "%UserProfile%\france.png"

$Image="%UserProfile%/france.png"
$code = @'
using System.Runtime.InteropServices;
namespace Win32{
    
     public class Wallpaper{
        [DllImport("user32.dll", CharSet=CharSet.Auto)]
         static extern int SystemParametersInfo (int uAction , int uParam , string lpvParam , int fuWinIni) ;
         
         public static void SetWallpaper(string thePath){
            SystemParametersInfo(20,0,thePath,3); 
         }
    }
 } 
'@

add-type $code
[Win32.Wallpaper]::SetWallpaper($Image)

Remove-Item $Image
