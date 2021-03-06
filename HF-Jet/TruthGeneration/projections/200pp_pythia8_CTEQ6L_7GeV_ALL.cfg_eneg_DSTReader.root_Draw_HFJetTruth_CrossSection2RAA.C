{
//=========Macro generated from canvas: Draw_HFJetTruth_CrossSection2RAA/Draw_HFJetTruth_CrossSection2RAA
//=========  (Sun Jun 11 17:15:33 2017) by ROOT version5.34/34
   TCanvas *Draw_HFJetTruth_CrossSection2RAA = new TCanvas("Draw_HFJetTruth_CrossSection2RAA", "Draw_HFJetTruth_CrossSection2RAA",24,157,700,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   Draw_HFJetTruth_CrossSection2RAA->Range(0,0,1,1);
   Draw_HFJetTruth_CrossSection2RAA->SetFillColor(0);
   Draw_HFJetTruth_CrossSection2RAA->SetBorderMode(0);
   Draw_HFJetTruth_CrossSection2RAA->SetBorderSize(2);
   Draw_HFJetTruth_CrossSection2RAA->SetTickx(1);
   Draw_HFJetTruth_CrossSection2RAA->SetTicky(1);
   Draw_HFJetTruth_CrossSection2RAA->SetLeftMargin(0.16);
   Draw_HFJetTruth_CrossSection2RAA->SetRightMargin(0.05);
   Draw_HFJetTruth_CrossSection2RAA->SetTopMargin(0.05);
   Draw_HFJetTruth_CrossSection2RAA->SetBottomMargin(0.16);
   Draw_HFJetTruth_CrossSection2RAA->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: Draw_HFJetTruth_CrossSection2RAA_1
   TPad *Draw_HFJetTruth_CrossSection2RAA_1 = new TPad("Draw_HFJetTruth_CrossSection2RAA_1", "Draw_HFJetTruth_CrossSection2RAA_1",0.01,0.01,0.99,0.99);
   Draw_HFJetTruth_CrossSection2RAA_1->Draw();
   Draw_HFJetTruth_CrossSection2RAA_1->cd();
   Draw_HFJetTruth_CrossSection2RAA_1->Range(7.911393,-0.243038,52.21519,1.275949);
   Draw_HFJetTruth_CrossSection2RAA_1->SetFillColor(0);
   Draw_HFJetTruth_CrossSection2RAA_1->SetBorderMode(0);
   Draw_HFJetTruth_CrossSection2RAA_1->SetBorderSize(2);
   Draw_HFJetTruth_CrossSection2RAA_1->SetTickx(1);
   Draw_HFJetTruth_CrossSection2RAA_1->SetTicky(1);
   Draw_HFJetTruth_CrossSection2RAA_1->SetLeftMargin(0.16);
   Draw_HFJetTruth_CrossSection2RAA_1->SetRightMargin(0.05);
   Draw_HFJetTruth_CrossSection2RAA_1->SetTopMargin(0.05);
   Draw_HFJetTruth_CrossSection2RAA_1->SetBottomMargin(0.16);
   Draw_HFJetTruth_CrossSection2RAA_1->SetFrameBorderMode(0);
   Draw_HFJetTruth_CrossSection2RAA_1->SetFrameBorderMode(0);
   
   TH1F *hframe__2 = new TH1F("hframe__2","",1000,15,50);
   hframe__2->SetMinimum(0);
   hframe__2->SetMaximum(1.2);
   hframe__2->SetDirectory(0);
   hframe__2->SetStats(0);
   hframe__2->SetLineWidth(2);
   hframe__2->SetMarkerStyle(20);
   hframe__2->SetMarkerSize(1.2);
   hframe__2->GetXaxis()->SetTitle("Transverse Momentum [GeV/#it{c}]");
   hframe__2->GetXaxis()->SetLabelFont(42);
   hframe__2->GetXaxis()->SetLabelSize(0.05);
   hframe__2->GetXaxis()->SetTitleSize(0.05);
   hframe__2->GetXaxis()->SetTitleOffset(1.4);
   hframe__2->GetXaxis()->SetTitleFont(42);
   hframe__2->GetYaxis()->SetTitle("#it{R}_{#it{AA}}");
   hframe__2->GetYaxis()->SetLabelFont(42);
   hframe__2->GetYaxis()->SetLabelSize(0.05);
   hframe__2->GetYaxis()->SetTitleSize(0.05);
   hframe__2->GetYaxis()->SetTitleOffset(1.4);
   hframe__2->GetYaxis()->SetTitleFont(42);
   hframe__2->GetZaxis()->SetLabelFont(42);
   hframe__2->GetZaxis()->SetLabelSize(0.05);
   hframe__2->GetZaxis()->SetTitleSize(0.05);
   hframe__2->GetZaxis()->SetTitleFont(42);
   hframe__2->Draw(" ");
   
   TGraphErrors *gre = new TGraphErrors(7);
   gre->SetName("RAA_h_b_copy1957747793");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);
   gre->SetLineWidth(3);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(2);
   gre->SetPoint(0,17.5,0.6);
   gre->SetPointError(0,0,0.003182748);
   gre->SetPoint(1,22.5,0.6);
   gre->SetPointError(1,0,0.007652875);
   gre->SetPoint(2,27.5,0.6);
   gre->SetPointError(2,0,0.01748521);
   gre->SetPoint(3,32.5,0.6);
   gre->SetPointError(3,0,0.03848539);
   gre->SetPoint(4,37.5,0.6);
   gre->SetPointError(4,0,0.09398347);
   gre->SetPoint(5,42.5,0.6);
   gre->SetPointError(5,0,0.2101534);
   gre->SetPoint(6,47.5,0.6);
   gre->SetPointError(6,0,0.3485);
   
   TH1F *Graph_RAA_h_b_copy19577477932 = new TH1F("Graph_RAA_h_b_copy19577477932","Graph",100,14.5,50.5);
   Graph_RAA_h_b_copy19577477932->SetMinimum(0.1818);
   Graph_RAA_h_b_copy19577477932->SetMaximum(1.0182);
   Graph_RAA_h_b_copy19577477932->SetDirectory(0);
   Graph_RAA_h_b_copy19577477932->SetStats(0);
   Graph_RAA_h_b_copy19577477932->SetLineWidth(2);
   Graph_RAA_h_b_copy19577477932->SetMarkerStyle(20);
   Graph_RAA_h_b_copy19577477932->SetMarkerSize(1.2);
   Graph_RAA_h_b_copy19577477932->GetXaxis()->SetLabelFont(42);
   Graph_RAA_h_b_copy19577477932->GetXaxis()->SetLabelSize(0.05);
   Graph_RAA_h_b_copy19577477932->GetXaxis()->SetTitleSize(0.05);
   Graph_RAA_h_b_copy19577477932->GetXaxis()->SetTitleOffset(1.4);
   Graph_RAA_h_b_copy19577477932->GetXaxis()->SetTitleFont(42);
   Graph_RAA_h_b_copy19577477932->GetYaxis()->SetLabelFont(42);
   Graph_RAA_h_b_copy19577477932->GetYaxis()->SetLabelSize(0.05);
   Graph_RAA_h_b_copy19577477932->GetYaxis()->SetTitleSize(0.05);
   Graph_RAA_h_b_copy19577477932->GetYaxis()->SetTitleOffset(1.4);
   Graph_RAA_h_b_copy19577477932->GetYaxis()->SetTitleFont(42);
   Graph_RAA_h_b_copy19577477932->GetZaxis()->SetLabelFont(42);
   Graph_RAA_h_b_copy19577477932->GetZaxis()->SetLabelSize(0.05);
   Graph_RAA_h_b_copy19577477932->GetZaxis()->SetTitleSize(0.05);
   Graph_RAA_h_b_copy19577477932->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_RAA_h_b_copy19577477932);
   
   gre->Draw("pe");
   
   TLegend *leg = new TLegend(0,0.7,0.85,0.93,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(0);
   TLegendEntry *entry=leg->AddEntry("NULL","#it{#bf{sPHENIX}} Simulation","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("NULL","#it{b}-jet #it{R}_{#it{AA}}, Au+Au 0-10%C, #sqrt{s_{NN}}=200 GeV","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("NULL","PYTHIA-8 #it{b}-jet, Anti-k_{T} R=0.4, |#eta|<0.7, CTEQ6L","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("NULL","#it{p}+#it{p}: 197 pb^{-1}, 60% Eff., 40% Pur.","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("NULL","Au+Au: 550B col., 40% Eff., 40% Pur.","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   Draw_HFJetTruth_CrossSection2RAA_1->Modified();
   Draw_HFJetTruth_CrossSection2RAA->cd();
   Draw_HFJetTruth_CrossSection2RAA->Modified();
   Draw_HFJetTruth_CrossSection2RAA->cd();
   Draw_HFJetTruth_CrossSection2RAA->SetSelected(Draw_HFJetTruth_CrossSection2RAA);
}
