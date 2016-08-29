void nll1dscan_r()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Jul 21 12:14:16 2016) by ROOT version6.06/01
   TCanvas *c = new TCanvas("c", "c",0,0,500,500);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   c->SetHighLightColor(2);
   c->Range(0.4843373,-1.176471,1.448193,10.58824);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetLeftMargin(0.12);
   c->SetRightMargin(0.05);
   c->SetTopMargin(0.05);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   TH1F *frame__1 = new TH1F("frame__1","",100,0.6,1.4);
   frame__1->SetMinimum(0);
   frame__1->SetMaximum(10);
   frame__1->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   frame__1->SetLineColor(ci);
   frame__1->GetXaxis()->SetTitle("#mu=#sigma/#sigma_{th}");
   frame__1->GetXaxis()->SetLabelFont(42);
   frame__1->GetXaxis()->SetLabelSize(0.035);
   frame__1->GetXaxis()->SetTitleSize(0.035);
   frame__1->GetXaxis()->SetTitleFont(42);
   frame__1->GetYaxis()->SetTitle("-2#DeltalnL");
   frame__1->GetYaxis()->SetLabelFont(42);
   frame__1->GetYaxis()->SetLabelSize(0.035);
   frame__1->GetYaxis()->SetTitleSize(0.035);
   frame__1->GetYaxis()->SetTitleFont(42);
   frame__1->GetZaxis()->SetLabelFont(42);
   frame__1->GetZaxis()->SetLabelSize(0.035);
   frame__1->GetZaxis()->SetTitleSize(0.035);
   frame__1->GetZaxis()->SetTitleFont(42);
   frame__1->Draw("");
   TLatex *   tex = new TLatex(1.32,1.25,"68% CL");

   ci = TColor::GetColor("#333333");
   tex->SetTextColor(ci);
   tex->SetTextFont(42);
   tex->SetTextSize(0.025);
   tex->SetLineWidth(2);
   tex->Draw();
   TLine *line = new TLine(0.6,1,1.4,1);

   ci = TColor::GetColor("#666666");
   line->SetLineColor(ci);
   line->SetLineStyle(2);
   line->Draw();
      tex = new TLatex(1.32,4.09,"95% CL");

   ci = TColor::GetColor("#333333");
   tex->SetTextColor(ci);
   tex->SetTextFont(42);
   tex->SetTextSize(0.025);
   tex->SetLineWidth(2);
   tex->Draw();
   line = new TLine(0.6,3.84,1.4,3.84);

   ci = TColor::GetColor("#666666");
   line->SetLineColor(ci);
   line->SetLineStyle(2);
   line->Draw();
      tex = new TLatex(0.12,0.96,"#bf{CMS} #it{preliminary}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.035);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.7,0.96,"#scale[0.8]{27.9 pb^{-1} (5.02 TeV)}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.035);
   tex->SetLineWidth(2);
   tex->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
